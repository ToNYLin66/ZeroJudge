#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int num[3];
    while (cin >> num[0] >> num[1] >> num[2]) {
        sort(num, num + 3);
        cout << num[0] << " " << num[1] << " " << num[2] << endl;
        if (num[0] + num[1] <= num[2])
            cout << "No" << endl;
        else if (num[0]*num[0] + num[1]*num[1] < num[2]*num[2])
            cout << "Obtuse" << endl;
        else if (num[0]*num[0] + num[1]*num[1] == num[2]*num[2])
            cout << "Right" << endl;
        else
            cout << "Acute" << endl;
    }
    return 0;
}