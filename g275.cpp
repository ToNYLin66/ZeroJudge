#include <iostream>
using namespace std;

int main(void) {
    int n, arr1[7], arr2[7], A, B, C;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 7; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < 7; i++) {
            cin >> arr2[i];
        }
        //A
        if ((arr1[1] != arr1[3]) && (arr1[1] == arr1[5]) &&
            (arr2[1] != arr2[3]) && (arr2[1] == arr2[5])) {
            A = 1;
        }
        else {
            A = 0;
            cout << "A";
        }
        //B
        if ((arr1[6] == 1) && (arr2[6] == 0)) {
            B = 1;
        }
        else {
            B = 0;
            cout << "B";
        }
        //C
        if ((arr1[1] != arr2[1]) && (arr1[3] != arr2[3]) && (arr1[5] != arr2[5])) {
            C = 1;
        }
        else {
            C = 0;
            cout << "C";
        }
        //None
        if (A & B & C) {
            cout << "None";
        }
        cout << endl;
    }
    return 0; 
} 
