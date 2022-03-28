# -*- coding: utf-8 -*-
N, M = map(int,input().split())
list_max = []
output = []

for i in range(N):
    arr = list(map(int, input().split()))
    list_max.append(max(arr))
    S = sum(list_max)

for i in list_max:
  if ((S % i) == 0):
    output.append(i)
print(S)
if output == []:
    print("-1")
else:
    print(*output)