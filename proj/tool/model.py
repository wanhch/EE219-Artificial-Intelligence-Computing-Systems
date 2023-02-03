import torch 
import torchvision
import torchvision.transforms as transforms
import torch.nn as nn
import torch.nn.functional as F
import numpy as np

CIFAR10_PATH = "../data/cifar10"
MODLE_PATH = "../data/model/model_lab1.pth"
SAVE_PATH = "../data/bin/data.bin"
GT_PATH = "../data/bin/groundtruth.bin"

class Network(nn.Module):
    def __init__(self):
        super(Network, self).__init__()
        self.conv1 = nn.Conv2d(3, 12, 5, bias=False)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(12, 32, 3, bias=False)
        self.fc1 = nn.Linear(32 * 6 * 6, 256, bias=False)
        self.fc2 = nn.Linear(256, 64, bias=False)
        self.fc3 = nn.Linear(64, 10, bias=True)

def load_model( path ):
    model = torch.load(path, map_location='cpu')
    return model

def get_testloader():
    transform = transforms.Compose(
        [transforms.ToTensor(),
        transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))])
    testset = torchvision.datasets.CIFAR10(root=CIFAR10_PATH, train=False,
                                        download=True, transform=transform)
    testloader = torch.utils.data.DataLoader(testset, batch_size=4,
                                            shuffle=False, num_workers=2)
    return testloader 

def gen_testcase(testloader, batch=1):
    cnt = 0 
    images_set = []
    labels_set = []
    for data in testloader:
        images, labels = data
        images_set.append(images)
        labels_set.append(labels)
        cnt += 1 
        if cnt>=batch:
            break 
    return images_set, labels_set

def export_bin(filename, data_bytes):
    with open(filename, "wb") as f:
        f.write(data_bytes)

if __name__=='__main__':
    model = load_model(MODLE_PATH)
    test_loader = get_testloader()
    images_set, labels_set = gen_testcase(test_loader, batch=1)
    input_img = images_set[0]
    # print(model.conv1.weight.shape)
    # print(model.conv1.weight)
    # print(model.input_scale)
    # print(model.conv1.output_scale)

    input_scale = torch.clamp(torch.round(input_img*model.input_scale), min=-128, max=127)
    # print(input_scale.shape)

    # select the data to be saved
    total_data = np.array([],dtype=np.int8)
    the_data = input_scale.data[0]
    # print(the_data.shape)
    # for i in range(3):
    #     for j in range(32):
    #         print(the_data[i][j])
    #     print("\n")

    im2col_data = np.array([],dtype=np.int8)
    for i in range(3):
        for i_28 in range(28):
            for j_28 in range(28):
                for i_5 in range(5):
                    for j_5 in range(5):
                        im2col_data = np.append(im2col_data, the_data[i][i_28+i_5][j_28+j_5])
                if(((j_28+1) % 2) == 0):
                    im2col_data = np.append(im2col_data, [0,0,0,0,0,0,0,0,0,0,0,0,0,0])
    # print(im2col_data)
    print(im2col_data.shape)

    conv1_weight = torch.clamp(torch.round(model.conv1.weight), min=-128, max=127)
    weight_data = np.array([],dtype=np.int8)
    for i_12 in range(12):
        for i_3 in range(3):
            for i_5 in range(5):
                for j_5 in range(5):
                    weight_data = np.append(weight_data, conv1_weight.data[i_12][i_3][i_5][j_5])
            weight_data = np.append(weight_data, [0,0,0,0,0,0,0])
    # print(weight_data)
    # print(weight_data.shape)

    # for i in range(int(19600/25)):
    #     for j in range(25):
    #         print(im2col_data[i*25+j])
    #     print("\n")
    #     # break

    relu = nn.ReLU()

    conv1_result = model.conv1(the_data)
    # print(conv1_result)
    conv1_result = torch.clamp(torch.round(conv1_result*model.conv1.output_scale), min=-128, max=127)
    # print(relu(conv1_result))
    # print(conv1_result.shape)

    

    maxpool_result = model.pool(relu(conv1_result))
    print(maxpool_result)
    print(maxpool_result.shape)

    maxpool_result = np.array(maxpool_result.data,dtype=np.int8)

    # the_data = np.array(the_data,dtype=np.int8)
    # total_data = np.append(total_data, the_data)
    total_data = np.append(total_data, im2col_data)
    total_data = np.append(total_data, weight_data)
    total_data = np.array(total_data,dtype=np.int8)
    # print(total_data)
    # print(total_data.shape)

    the_bin = bytes(total_data)
    print(total_data.shape)
    export_bin( SAVE_PATH, the_bin )

    gt_bin = bytes(maxpool_result)
    export_bin( GT_PATH, gt_bin )