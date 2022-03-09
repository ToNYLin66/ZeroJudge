# -*- coding: utf-8 -*-
F = int(input())
N = int(input())
y = list(map(int, input().split()))
num = 0
wl = False
for i in range(N):
    num += 1
    if (i > 0):
        if ( i >= 2 and (y[i - 1] == y[i - 2]) ):
            if (y[i-1] == 0):
                F = 5
            elif (y[i - 1] == 2):
                F = 0
            elif (y[i - 1] == 5):
                F = 2
        else:
            F = y[i - 1]
    
    print(str(F) + " ", end = '')
    if (F == y[i]):
        continue
    else:
        if (F == 0):
            if (y[i] == 2):
                print(": Won at round ", end = '')
                wl = True
            if (y[i] == 5):
                print(": Lost at round ", end = '')
                wl = True
        if (F == 2):
            if (y[i] == 5):
                print(": Won at round ", end = '')
                wl = True
            if (y[i] == 0):
                print(": Lost at round ", end = '')
                wl = True
        if (F == 5):
            if (y[i] == 0):
                print(": Won at round ", end = '')
                wl = True
            if (y[i] == 2):
                print(": Lost at round ", end = '')
                wl = True
        print(i + 1)
        break

if (num == N and wl == False):
    print(": Drew at round " + str(N))