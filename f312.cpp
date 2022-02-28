#include <iostream>
using namespace std;

int main(void) {
    int A1, B1, C1, A2, B2, C2, n, temp, MAX = -9999;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2 >> n;
    for (int i = 0; i <= n; i++) {
        temp = (A1*i*i + B1*i + C1) + (A2*(n-i)*(n-i) + B2*(n-i) + C2);
        if (temp > MAX) {
            MAX = temp;
        }
    }
    cout << MAX << endl;
    return 0;
}