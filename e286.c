#include <stdio.h>

int main(void) {
    
    int a = 0, b = 0, c = 0, d = 0, T1 = 0, T2 = 0, T3 = 0, T4 = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    T1 = a + b + c + d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    T2 = a + b + c + d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    T3 = a + b + c + d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    T4 = a + b + c + d;

    printf("%d:%d\n", T1, T2);
    printf("%d:%d\n", T3, T4);

    if (T1 > T2 && T3 > T4) {
        printf("Win\n");
    } else if (T1 < T2 && T3 < T4) {
        printf("Lose\n");
    } else {
        printf("Tie\n");
    }
    return 0;
}