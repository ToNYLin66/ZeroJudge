# -*- coding: utf-8 -*-

while True:
    try:
        a, b, c = list(map(int, input().split()))
    except EOFError: #當遇到(End of File Error)時，例如沒有測試資料時
        break #甚麼都不做
    
    IMP = 1
    if (a != 0): 
        a = 1
    if (b != 0): 
        b = 1

    if ((a&b) == c):
        print("AND")
        IMP = 0;
    if ((a|b) == c):
        print("OR")
        IMP = 0
    if ((a^b) == c):
        print("XOR")
        IMP = 0;
    if (IMP):
        print("IMPOSSIBLE")