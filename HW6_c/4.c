#include <stdio.h>

int sumDigits(int *num){
    int res = 0;
    while(*num % 10 != *num){
        res += *num % 10;
        *num /= 10;
    }
    res += *num % 10;
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int res = sumDigits(&n);
    printf("%d", res);
    
}