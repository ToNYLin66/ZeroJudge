# -*- coding: utf-8 -*-
num = 0
n = int(input())
h = list(map(int, input().split()))
for index, value in enumerate(h):
    if (value == 0):
        if (index == 0):
            num += h[index+1]
        elif (index == n-1):
            num += h[index-1]
        else:
            if (h[index-1] < h[index+1]):
                num += h[index-1]
            else:
                num += h[index+1]
print(num)