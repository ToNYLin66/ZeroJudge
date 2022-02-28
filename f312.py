# -*- coding: utf-8 -*-

A1, B1, C1 = list(map(int, input().split()))
A2, B2, C2 = list(map(int, input().split()))
n = int(input())
MAX = -999
for i in range(n+1):
    temp = (A1*i*i + B1*i + C1) + (A2*(n-i)*(n-i) + B2*(n-i) + C2)
    if (temp > MAX):
        MAX = temp
print(MAX)    