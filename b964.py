# -*- coding: utf-8 -*-

n = int(input())
k = list(map(int, input().split()))
k.sort()
print(" ".join([str(i) for i in k]))

Max = -999;
for i in range(n):
    if (k[i] < 60 and k[i] > Max):
        Max = k[i]
if (Max == -999):
    print("best case")
else:
    print(Max)
    
Min = 999
for i in range(n):
    if (k[i] >= 60 and k[i] < Min):
        Min = k[i];
if (Min == 999):
    print("worst case")
else:
    print(Min)