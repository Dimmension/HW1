#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int half = n/2;
    for (int i = 0; i < half; i++)// swap
    {
        int temp = arr[i];
        arr[i] = arr[half + i];
        arr[half + i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}