#include <stdio.h>
void quick_sort(int* array, int left, int right);

int main(void) {
    int n;
    while (scanf("%d", &n)) {
        int k[n];
        for (int i = 0; i < n ;i++)
            scanf("%d", &k[i]);
        //bubble_sort(k, n);
        quick_sort(k, 0, n-1);
        for (int i = 0; i < n; i++) {
            printf("%d", k[i]);
            if (i == n - 1)
                break;
            printf(" ");
        }
        printf("\n");
        
        int Max = -999;
        for (int i = 0; i < n; i++)
            if (k[i] < 60 && k[i] > Max)
                Max = k[i];
        if (Max == -999)
            printf("best case\n");
        else
            printf("%d\n", Max);

        int min = 999;
        for (int i = 0; i < n; i++)
            if (k[i] >= 60 && k[i] < min)
                min = k[i];
        if (min == 999)
            printf("worst case\n");
        else
            printf("%d\n", min);
    }
    return 0;
}

void quick_sort(int* array, int left, int right) {
 	if (left < right) {
     	int i = left - 1, j = right + 1;
     	int mid = array[(left + right) / 2];
 
 	 	while (1)
     	{
          	while (array[++i] < mid);
          	while (array[--j] > mid);
 
          	if (i >= j)
              	break;
 
          	//Swap(array, i, j);
          	int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
     	}
     	quick_sort(array, left, i - 1);
     	quick_sort(array, j + 1, right);
 	}
}