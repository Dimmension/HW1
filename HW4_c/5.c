#include <stdio.h>
int main(){
    float n, res = 0, i = 0;
    scanf("%f", &n);
    do{
        scanf("%f", &n);
        res += n;
        i++;
    } while(n != 0); // ввод до нуля
    
    printf("%f", res / (i-1));
}