#include <stdio.h>
#include <math.h>
// проверка на високосность
bool isLeap(int y){
    if (y%4==0 && y%100!=0 || y%400==0)
        return true;
    return false;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysLeap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // високосный
    if(!isLeap(m))
        printf("%d", days[n-1]);
    else
        printf("%d", daysLeap[n-1]);
}