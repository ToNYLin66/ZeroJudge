#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    while (cin >> n) {
        int k[n];
        for (int i = 0; i < n ;i++)
            cin >> k[i];
        sort(k, k + n);
        for (int i = 0; i < n; i++) {
            cout << k[i];
            if (i == n - 1)
                break;
            cout << " ";
        }
        cout << endl;
        
        int Max = -999;
        for (int i = 0; i < n; i++)
            if (k[i] < 60 && k[i] > Max)
                Max = k[i];
        if (Max == -999)
            cout << "best case" << endl;
        else
            cout << Max << endl;

        int min = 999;
        for (int i = 0; i < n; i++)
            if (k[i] >= 60 && k[i] < min)
                min = k[i];
        if (min == 999)
            cout << "worst case" << endl;
        else
            cout << min << endl;
    }
    return 0;
}