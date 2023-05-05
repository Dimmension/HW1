#include <stdio.h>
int main(){
    int n, count0 = 0, count_b = 0, count_m = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) count0++;
        if (arr[i] > 0) count_b++;  // проверка всех вариантов
        if (arr[i] < 0) count_m++;
    }
    
    printf("%d %d %d", count0, count_b, count_m);
}