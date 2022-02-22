#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 0, b = 0, c = 0, IMP = 1;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a) a = 1;
    if (b) b = 1;
    
    if ((a&b) == c) {
        printf("AND\n");
        IMP = 0;
    }
    if ((a|b) == c) {
        printf("OR\n");
        IMP = 0;
    }
    if ((a^b) == c) {
        printf("XOR\n");
        IMP = 0;
    }
    if (IMP){
        printf("IMPOSSIBLE\n");
    }
    return 0;
}