#include <stdio.h>

int gcd(int a, int b) // НОД
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void reduce_fraction(int * a, int * b){
    int del = gcd(*a,*b);
    *a /= del;
    *b /= del;
    printf("%d %d\n", *a,*b);
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    reduce_fraction(&n,&m);
}