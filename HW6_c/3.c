#include <stdio.h>
int main() {

    int n;
    long long f1 = 0, f2 = 1; // числа большие -> лонг
    long long next = f1 + f2;

    scanf("%d", &n);

    for (int i = 3; i <= n; ++i) {
        f1 = f2;
        f2 = next;
        next = f1 + f2;
    }
    printf("%lld ", next);

    return 0;
}