#include <stdio.h>
#include <math.h>

void bubblesort(int *a, int n)
{
  for (int i = n - 1; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (a[j] > a[j + 1]){
            int t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
      }
    }
  }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], dp[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubblesort(arr, n); // сортировка пузырьком

    dp[1] = arr[1] - arr[0];//база для дп
    dp[2] = arr[2] - arr[0];
    for(int i = 3; i <= n; i++)
        dp[i] = std::min(dp[i-1], dp[i-2]) + arr[i] - arr[i-1]; // вычисление динамики
    printf(" %d\n",dp[n-1]);
}