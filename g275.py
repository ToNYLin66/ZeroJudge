# -*- coding: utf-8 -*-
def ABC(a1, a2):
    return ('A'*(not(all(n[1] != n[3] and n[1] == n[5] for n in [a1, a2])))
    + 'B'*(not(a1[-1] == '1' and a2[-1] == '0'))
    + 'C'*(not(a1[1] != a2[1] and a1[3] != a2[3] and a1[5] != a2[5]))
    )

for _ in range(int(input())):
    print(ABC(input().split(), input().split()) or 'None')