#include <stdio.h>

int main(void) {
    int A1, B1, C1, A2, B2, C2, n, temp, MAX = -9999;
    scanf("%d %d %d", &A1, &B1, &C1);
    scanf("%d %d %d", &A2, &B2, &C2);
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        temp = (A1*i*i + B1*i + C1) + (A2*(n-i)*(n-i) + B2*(n-i) + C2);
        if (temp > MAX) {
            MAX = temp;
        }
    }
    printf("%d\n", MAX);
    return 0;
}