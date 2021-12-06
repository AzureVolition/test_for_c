#include <stdio.h>
#include <stdlib.h>

void exchange(char **p){
    (*p)[0] = '1';
    (*p)[1] = '2';
    char m = (*p)[1];
    printf("%c\n", m);
}

int main(){
    char *charArray;
    charArray = (char*)malloc(10);
    scanf("%s", charArray);
    exchange(&charArray);
    printf("%s", charArray);
    return 0;
}