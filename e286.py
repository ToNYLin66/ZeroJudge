# -*- coding: utf-8 -*-

while True:
    try:
        T1 = sum(list(map(int, input().split())))
        T2 = sum(list(map(int, input().split())))
        T3 = sum(list(map(int, input().split())))
        T4 = sum(list(map(int, input().split())))
        print(str(T1) + ":" + str(T2))
        print(str(T3) + ":" + str(T4))
    except EOFError: #當遇到(End of File Error)時，例如沒有測試資料時
        break #甚麼都不做
    
    if (T1 > T2 and T3 > T4):
        print("Win")
    elif (T1 < T2 and T3 < T4):
        print("Lose")
    else:
        print("Tie")