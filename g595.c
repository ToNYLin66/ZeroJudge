#include <stdio.h>

int main(void) {
    int n, h[100], num = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    for (int i = 0; i < n; i++) {
        if (h[i] == 0) {
            if (i == 0) {
                num += h[i + 1];
            }
            else if (i == n - 1) {
                num += h[i - 1];
            }
            else {
                if (h[i - 1] < h[i + 1]) {
                    num += h[i - 1];
                }
                else {
                    num += h[i + 1];
                }
            }
        }
    }
    printf("%d\n", num);
    return 0; 
}