#include<stdio.h>

int main(){
    int input_time;
    scanf("%d", &input_time);
    int num[input_time];
    int count = 0;
    for (int i = 0; i < input_time;i++){
        scanf("%d", &num[i]);
        count = count + (num[i] == 2 ? 1 : 0);
    }
    printf("%d\n", count);
} 