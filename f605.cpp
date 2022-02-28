#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, d, num = 0, total = 0, avg = 0;
    int P[3];
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> P[0] >> P[1] >> P[2];
        sort(P, P + 3);
        
        if (P[2] - P[0] >= d) {
            avg = (P[0] + P[1] + P[2]) / 3;
            total += avg;
            num++;
        }
    }
    cout << num << " " << total << endl;
    return 0;
}