#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = -9999, min = 9999;
    int iMax = 0, iMin = 0;
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++) sum += arr[j][i];

        if (max < sum)
        {
            max = sum;
            iMax = i;
        }
        if (min > sum)
        {
            min = sum;
            iMin = i;
        }
    }
    for(int i = 0; i < n; ++i) //swap
    {
        int temp = arr[i][iMin];
        arr[i][iMin] = arr[i][iMax];
        arr[i][iMax] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}