#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while (cin >> n) {
        int a, b, c, d;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            if (a == 0 && c == 0)
                cout << "A";
            else if (c == 1 && d == 1)
                cout << "B";
            else if (a == 0 && b == 0)
                cout << "C";
            else if (a == 1 && d == 1)
                cout << "D";
            else if (a == 1 && b == 0)
                cout << "E";
            else
                cout << "F";
        }
        cout << endl;
    }
    return 0;
}