# -*- coding: utf-8 -*-

n, d = list(map(int, input().split()))
avg = 0
total = 0
num = 0
for i in range(n):
    P = list(map(int, input().split()))
    P.sort()

    if (P[2] - P[0] >= d):
        avg = (P[0] + P[1] + P[2]) / 3
        total += int(avg)
        num += 1
print(str(num) + " " + str(total))    