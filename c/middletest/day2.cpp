#include <stdio.h>
#include <stdlib.h>

void cpgets(char*& p){
    p = (char*)malloc(100);
    fgets(p,100,stdin);
}
int main(){
    char *p;
    cpgets(p);
    printf(p);
    return 0;
}