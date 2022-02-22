#include <iostream>
using namespace std;

int main(void) {
    int a = 0, b = 0, c = 0, IMP = 1;
    cin >> a >> b >> c;
    
    if (a) a = 1;
    if (b) b = 1;
    
    if ((a&b) == c) {
        cout << "AND" << endl;
        IMP = 0;
    }
    if ((a|b) == c) {
        cout << "OR" << endl;
        IMP = 0;
    }
    if ((a^b) == c) {
        cout << "XOR" << endl;
        IMP = 0;
    }
    if (IMP) {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}