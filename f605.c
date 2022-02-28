#include <stdio.h>
void bubble_sort(int arr[], int n);

int main(void) {
    int n, d, num = 0, total = 0, avg = 0;
    int P[3];
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &P[0], &P[1], &P[2]);
        bubble_sort(P, 3);
        
        if (P[2] - P[0] >= d) {
            avg = (P[0] + P[1] + P[2]) / 3;
            total += avg;
            num++;
        }
    }
    printf("%d %d\n", num, total);
    return 0;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
}