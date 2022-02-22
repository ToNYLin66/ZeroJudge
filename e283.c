#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a, b, c, d;
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d %d", &a ,&b ,&c ,&d);
            if (a == 0 && c == 0)
                printf("A");
            else if (c == 1 && d == 1)
                printf("B");
            else if (a == 0 && b == 0)
                printf("C");
            else if (a == 1 && d == 1)
                printf("D");
            else if (a == 1 && b == 0)
                printf("E");
            else
                printf("F");
        }
        printf("\n");
    }
    return 0;
}