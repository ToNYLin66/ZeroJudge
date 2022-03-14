#include <stdio.h>

int main(void) {
    int a, b, n, input, ca = 0, cb = 0, ans = 0;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ca = 0;
        cb = 0;
        scanf("%d", &input);
        while (input != 0) {
            if (input == a) {
                ca++;
            }
            if (input == -a) {
                ca--;
            }
            if (input == b) {
                cb++;
            }
            if (input == -b) {
                cb--;
            }
            scanf("%d", &input);
        }
        if (ca > 0 && cb > 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0; 
}