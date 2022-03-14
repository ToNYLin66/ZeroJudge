#include <iostream>
using namespace std;

int main(void) {
    int a, b, n, input, ca = 0, cb = 0, ans = 0;
    cin >> a >> b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ca = 0;
        cb = 0;
        cin >> input;
        while (input != 0) {
            if (input == a) {
                ca++;
            }
            if (input == -a) {
                ca--;
            }
            if (input == b) {
                cb++;
            }
            if (input == -b) {
                cb--;
            }
            cin >> input;
        }
        if (ca > 0 && cb > 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0; 
} 
