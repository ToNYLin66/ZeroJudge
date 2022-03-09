#include <stdio.h>

int main(void) {
    int F, N;
    scanf("%d", &F);
    scanf("%d", &N);

    int y[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &y[i]);
     
    int i = 0;
    for (; i < N; i++) {
        if (i > 0) {
            if ( i >= 2 && (y[i - 1] == y[i - 2]) ) {
                if (y[i - 1] == 0)
                    F = 5;
                else if (y[i - 1] == 2)
                    F = 0;
                else if (y[i - 1] == 5)
                    F = 2;
            }else
                F = y[i - 1];
        }
         
        printf("%d ", F);
        if (F == y[i])
            continue;
        else {
            if (F == 0) {
                if (y[i] == 2)
                    printf(": Won at round ");
                if (y[i] == 5)
                    printf(": Lost at round ");
            }
            if (F == 2) {
                if (y[i] == 5)
                   printf(": Won at round ");
                if (y[i] == 0)
                    printf(": Lost at round ");
            }
            if (F == 5) {
                if (y[i] == 0)
                    printf(": Won at round ");
                if (y[i] == 2)
                    printf(": Lost at round ");
            }
            printf("%d\n", i + 1);
            break;
        } 
    }
    if (i == N)
        printf(": Drew at round %d\n", N);
    
    return 0; 
} 