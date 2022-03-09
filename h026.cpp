#include <iostream>
using namespace std;

int main(void) {
    int F, N;
    cin >> F;
    cin >> N;
     
    int y[N];
    for (int i = 0; i < N; i++)
        cin >> y[i];
     
    int i = 0;
    for (; i < N; i++) {
        if (i > 0) {
            if ( i >= 2 && (y[i - 1] == y[i - 2]) ) {
                if (y[i-1] == 0)
                    F = 5;
                else if (y[i - 1] == 2)
                    F = 0;
                else if (y[i - 1] == 5)
                    F = 2;
            }else
                F = y[i - 1];
        }
         
        cout << F << " ";
        if (F == y[i])
            continue;
        else {
            if (F == 0) {
                if (y[i] == 2)
                    cout << ": Won at round ";
                if (y[i] == 5)
                    cout << ": Lost at round ";
            }
            if (F == 2) {
                if (y[i] == 5)
                    cout<<": Won at round ";
                if (y[i] == 0)
                    cout<<": Lost at round ";
            }
            if (F == 5) {
                if (y[i] == 0)
                    cout << ": Won at round ";
                if (y[i] == 2)
                    cout << ": Lost at round ";
            }
            cout << i + 1;
            break;
        } 
    }
    if (i == N)
        cout << ": Drew at round " << N;
    
    return 0; 
} 