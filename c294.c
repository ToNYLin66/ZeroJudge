#include <stdio.h>

int main(void) {
    int num[3];
    int tmp;
    while (scanf("%d %d %d", &num[0], &num[1], &num[2])) {
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (num[i] > num[j]){
                    tmp = num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                }
            }
        }
        
        printf("%d %d %d\n", num[0], num[1], num[2]);
        if (num[0] + num[1] <= num[2])
            printf("No\n");
        else if (num[0]*num[0] + num[1]*num[1] < num[2]*num[2])
            printf("Obtuse\n");
        else if (num[0]*num[0] + num[1]*num[1] == num[2]*num[2])
            printf("Right\n");
        else
            printf("Acute\n");
    }
    return 0;
}