#include <iostream>
using namespace std;

int main(void) {
    int n, D, Benefit = 0, y, num = 0;
    int a[100];
    
    cin >> n >> D;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    y = a[0];
    for (int i = 1; i < n; i++) {
        if (num == 0) {
            if (y <= a[i] - D) {
                Benefit = Benefit + a[i] - y;
                y = a[i];
                num = 1;
            }
        }else {
            if (y >= a[i] + D) {
                y = a[i];
                num = 0;
            }
        }
    }
    cout << Benefit << endl;
    return 0;
}