#include <stdio.h>
#include <cmath>
int abs_arr(int* arr, int n){
    int cnt = 0;
    for (int* ptr = arr; ptr < arr + n; ptr++)
    {
        if (*ptr < 0){
            int mod = abs(*ptr);
            *ptr = mod;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = abs_arr(arr,n);
    printf("%d ", res);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}