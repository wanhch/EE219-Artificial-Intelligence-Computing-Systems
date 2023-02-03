import torch 
import torchvision
import torchvision.transforms as transforms
import torch.nn as nn
import torch.nn.functional as F
import numpy as np
import os

CIFAR10_PATH = "../data/cifar10"
MODLE_PATH = "../data/model/model_lab1.pth"
SAVE_PATH = "../data/bin/data.bin"
GT_PATH = "../data/bin/groundtruth.bin"
RESULT_PATH = "../data/bin/data1.bin"

if __name__=='__main__':
    gt= np.fromfile(GT_PATH, dtype=np.int8)
    result = np.fromfile(RESULT_PATH, dtype=np.int32)
    correct = True
    for i in range(14*14*12):
        if (gt[i] != result[i+32768]):
            print(gt[i], result[i+32768])
            correct = False
    print(correct)