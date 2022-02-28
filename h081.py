# -*- coding: utf-8 -*-

n, D = list(map(int, input().split()))
a = [int(x) for x in input().split()]
Benefit = 0
y = a[0]
num = 0

for i in range(1, n):
    if num == 0:
        if y <= a[i] - D:
            Benefit = Benefit + a[i] - y
            y = a[i]
            num = 1
    else:
        if y >= a[i] + D:
            y = a[i]
            num = 0
print(Benefit)   