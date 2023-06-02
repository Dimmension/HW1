#include <stdio.h>

char* join(char* words[], int n){
    char* result[256];
    for (int *ptr = words; ptr < words+n-1; ++ptr)
    {
        strcat(result, *ptr);
        strcat(result, " ");
    }
    strcat(result, words[n-1]);
    return result;
}


int main(){
    int n;
    scanf("%d", &n);
    join(string, n);
}
