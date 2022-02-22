#include <iostream>
using namespace std;

int main(void) {
    
    int a = 0, b = 0, c = 0, d = 0, T1 = 0, T2 = 0, T3 = 0, T4 = 0;

    cin >> a >> b >> c >> d;
    T1 = a + b + c + d;
    cin >> a >> b >> c >> d;
    T2 = a + b + c + d;
    cin >> a >> b >> c >> d;
    T3 = a + b + c + d;
    cin >> a >> b >> c >> d;
    T4 = a + b + c + d;

    cout << T1 << ":" << T2 << endl;
    cout << T3 << ":" << T4 << endl;

    if (T1 > T2 && T3 > T4) {
        cout << "Win" << endl;
    } else if (T1 < T2 && T3 < T4) {
        cout << "Lose" << endl;
    } else {
        cout << "Tie" << endl;
    }
    return 0;
}