#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int solver(int n){
    if(n == 3) return 1;
    int dp[99999];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i < n; i++)
    {
    dp[i] = (pow(2,i-2)) + dp[i-1] + dp[i-2] + dp[i-3]; 
    }
    return dp[n-1];
}

int TriEdinici(int n){
    return (pow(2,n) - solver(n));
}

int main(){
    int n = 10;
    printf("%d ", TriEdinici(n));
    return 0;
}