# -*- coding: utf-8 -*-
ls = { "0 1 0 1": "A",
    "0 1 1 1": "B",
    "0 0 1 0": "C", 
    "1 1 0 1": "D",
    "1 0 0 0": "E",
    "1 1 0 0": "F"
    }

while True:

    try:
        s = int(input());
        string = "";
        for i in  range(s):
            t = input();
            string += ls[t]
        print(string);
    except:
        break;