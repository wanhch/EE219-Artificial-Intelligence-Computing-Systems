# coding=utf-8
import numpy as np
import struct
import os
import time

class FullyConnectedLayer(object):
    def __init__(self, num_input, num_output):  # 全连接层初始化
        self.num_input = num_input
        self.num_output = num_output
        print('\tFully connected layer with input %d, output %d.' % (self.num_input, self.num_output))
    def init_param(self, std=0.01):  # 参数初始化
        self.vw = 0
        self.vb = 0
        self.weight = np.random.normal(loc=0.0, scale=std, size=(self.num_input, self.num_output))
        self.bias = np.zeros([1, self.num_output])
    def forward(self, input):  # 前向传播计算
        start_time = time.time()
        self.input = input
        # TODO：全连接层的前向传播，计算输出结果; v=wx+b，请注意矩阵尺寸；可能用到函数：np.dot/np.matmul
        self.output = np.dot(input, self.weight) + self.bias
        return self.output
    def backward(self, top_diff):  # 反向传播的计算
        # TODO：全连接层的反向传播，计算参数梯度和本层损失；注意d_bias计算，可当作特殊的weight
        # bottom_diff需要进一步向前传播计算前一层（算子）梯度；top_diff由上一层（算子）输出，用于计算本层（算子）梯度
        # 该步骤与课件中矩阵求导两个分支（d_weight/bottom_diff）相对应
        # 可能用到的函数：np.dot/np.matmul/.transpose
        self.d_weight = np.dot(self.input.transpose(), top_diff)
        self.d_bias = np.sum(top_diff, axis=0)
        # print(top_diff)
        # print(self.weight.shape)
        bottom_diff = np.dot(top_diff, self.weight.transpose())
        return bottom_diff
    def update_param(self, lr):  # 参数更新
        # TODO：对全连接层参数利用参数进行更新
        # 为简化设计，此处采用最简单的gradient descent算法更新即可
        # w = w - learningrate * dw

        # self.weight = self.weight - lr * self.d_weight
        # self.bias = self.bias - lr * self.d_bias
        beta = 0.01
        self.vw = beta * self.vw + self.d_weight
        self.weight = self.weight - lr * self.vw
        self.vb = beta * self.vb + self.d_bias
        self.bias = self.bias - lr * self.vb
        
    def load_param(self, weight, bias):  # 参数加载
        assert self.weight.shape == weight.shape
        assert self.bias.shape == bias.shape
        self.weight = weight
        self.bias = bias
    def save_param(self):  # 参数保存
        return self.weight, self.bias

class ReLULayer(object):
    def __init__(self):
        print('\tReLU layer.')
    def forward(self, input):  # 前向传播的计算
        self.input = input
        # TODO：ReLU层的前向传播，计算输出结果;可能用到的函数：np.maximum
        output = np.maximum(input, 0)
        return output
    def backward(self, top_diff):  # 反向传播的计算
        # TODO：ReLU层的反向传播，计算本层损失；ReLU的导数计算
        act_de = self.input
        (row, col) = act_de.shape
        for i in range(row):
            for j in range(col):
                if (act_de[i, j] > 0):
                    act_de[i, j] = 1
                else:
                    act_de[i, j] = 0
        bottom_diff = top_diff * act_de
        # raise()
        return bottom_diff

class SoftmaxLossLayer(object):
    def __init__(self):
        print('\tSoftmax loss layer.')
    def forward(self, input):  # 前向传播的计算
        # softmax 损失层的前向传播，计算输出结果
        input_max = np.max(input, axis=1, keepdims=True)
        input_exp = np.exp(input - input_max)
        self.prob = input_exp/np.sum(input_exp, axis = 1, keepdims = True)
        return self.prob
    def get_loss(self, label):   # 计算损失函数
        self.batch_size = self.prob.shape[0]
        self.label_onehot = np.zeros_like(self.prob)
        self.label_onehot[np.arange(self.batch_size), label] = 1.0
        # TODO：计算交叉熵，注意需要考虑用batch_size进行normalize，其余参考课堂PPT给出公式
        # 注意公式前面有一个负号。可能用到的函数：np.log
        loss_vec = np.zeros(self.batch_size)
        for i in range(self.batch_size):
            # print(self.label_onehot[i])
            # print(self.prob[i])
            loss_vec[i] = -np.sum(np.dot(self.label_onehot[i], np.log(self.prob[i])))
            # loss_vec[i] = -np.sum(np.dot(self.label_onehot[i], np.log(self.prob[i])) + np.dot(1-self.label_onehot[i], np.log(1-self.prob[i])))
        # print(loss_vec)
        loss = np.sum(loss_vec)/self.batch_size
        # print(loss)
        return loss
    def backward(self):  # 反向传播的计算
        # TODO：softmax 损失层的反向传播，计算本层损失
        # Hint：根据损失函数与softmax层的计算，求出d_loss/d_input（loss对softmax层的输入的偏导），作为bottom_diff向前传播
        # 简化后公式应该简单且优美，但同样需要注意对batch_size进行归一化
        # print(self.prob)
        # print(self.label_onehot)
        # print(self.prob - self.label_onehot)
        # print(np.sum(self.prob - self.label_onehot, axis=0))
        bottom_diff = (self.prob - self.label_onehot)/self.batch_size
        return bottom_diff

