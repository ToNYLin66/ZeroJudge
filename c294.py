# -*- coding: utf-8 -*-
num = []
num = list(map(int, input().split()))
num.sort()
print(" ".join([str(i) for i in num]))
if (num[0] + num[1] <= num[2]):
    print("No")
elif (num[0]*num[0] + num[1]*num[1] < num[2]*num[2]):
    print("Obtuse")
elif (num[0]*num[0] + num[1]*num[1] == num[2]*num[2]):
    print("Right")
else:
    print("Acute")