# -*- coding: utf-8 -*-
a, b = map(int, input().split())
n = int(input())
ans = 0
for _ in range(n):
    t = [int(x) for x in input().split()]
    ca = t.count(a) - t.count(-a)
    cb = t.count(b) - t.count(-b)
    if (ca > 0 and cb > 0):
        ans += 1
print(ans)