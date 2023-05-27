#include <stdio.h>

typedef struct Move
{
	int x;
	int y;
} Move;

Move getFinishPoint(struct Move arr[], int n){
    Move result;
    result.x = 0;
    result.y = 0;
    for (int i = 0; i < n; i++)
    {
        result.x += arr[i].x;
        result.y += arr[i].y;
    }
    return result; 
}

int main(){
    int n;
    scanf("%d", &n);
}