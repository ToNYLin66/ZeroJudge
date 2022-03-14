#include <iostream>
using namespace std;

int main(void) {
    int n, h[100], num = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++) {
        if (h[i] == 0) {
            if (i == 0) {
                num += h[i + 1];
            }
            else if (i == n - 1) {
                num += h[i - 1];
            }
            else {
                if (h[i - 1] < h[i + 1]) {
                    num += h[i - 1];
                }
                else {
                    num += h[i + 1];
                }
            }
        }
    }
    cout << num << endl;
    return 0; 
} 
