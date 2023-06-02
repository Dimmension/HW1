#include <stdio.h>

int ispolnitel(int num){
    int seg1 = (num / 100) * (num / 10 % 10);
    int seg2 = (num / 10 % 10) * (num % 10);
    printf("%d %d\n", seg1, seg2);
    int res = 0;

    if (seg1 < 10 && seg2 < 10){
        if(seg1 > seg2) seg2 *= 10;
        else seg1 *= 10;
    }
    else if (seg1 > 10 && seg2 < 10){
        seg2 *= 100;
    }
    else if (seg2 > 10 && seg1 < 10){
        seg1 *= 100;
    }
    else{
        if(seg1 > seg2) seg2 *= 100;
        else seg1 *= 100;
    }

    res = seg1 + seg2;
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int res = ispolnitel(n);
    printf("%d", res);

}