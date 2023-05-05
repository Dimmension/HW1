#include <stdio.h>
int int_to_bin(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (n % 2) + 10 * int_to_bin(n / 2); //рекурсивная функция
}
int main(){
    int n, m;
    scanf("%d", &n);
    m = int_to_bin(n);
    printf("%d", m);
}