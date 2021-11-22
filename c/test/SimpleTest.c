#include <stdio.h>
#include <stdlib.h>
int main(){
 
    int p;
    char c;
    char *str;
    scanf("%d", &p);
    str = (char*) malloc(p);

    scanf("%c", &c);
    gets(str);
    puts(str);

    free(str);
    str = NULL;
    return 0;
}