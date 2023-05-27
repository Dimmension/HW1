#include <stdio.h>

struct Person
{
	int age;
	char name[30];
};

float averageAge(struct Person arr[], int n){
    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += arr[i].age;
    }
    float avg = (float)summ / (float)n;
    return avg;
}

int main(){
    int n;
    scanf("%d", &n);
}