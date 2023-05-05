#include <stdio.h>
#include <math.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n-1; i++){
        printf("    ");             // пробелы в начале
    } 
    for(int i = 1; i <= k; i++){
        printf("%4d", i);
        int day = n + i - 1;
        if (day % 7 == 0 || i == k){ // переносим на новую неделю
            printf("\n");
        }
    }
    return 0;
}