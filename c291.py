# -*- coding: utf-8 -*-
def find(x):
    if parent[x] == x:
        return x
    else:
        parent[x] = find(parent[x])
    return parent[x]

def unite(x, y):
    global parent
    x = find(x)
    y = find(y)
    if x == y: 
        return
    if x <= y: 
        parent[x] = y
    else: parent[y] = x

while True:
    try:
        N = int(input())
    except EOFError:
        break
    
    parent = [i for i in range(N)]
    ans = 0
    M = list(map(int, input().split()))
    for i in range(N):
        unite(M[i], i)
    for i in range(N):
        find(i)
    for i in range(N):
        ans += parent[i] == i
    print(ans)