#include <stdio.h>
#include <string.h>


int test(char str[]){
    // /char str[20];
    //scanf("%s", str);
    char s_copy[20];
    int length = strlen(str);
    int count = 0;
    while (length > 0){
        s_copy[count++] = str[--length];
        printf("turned char is %d\n", str[length]);
    }
    puts(s_copy);
    printf("orign string is : %s\n overturned string is :%s\n", str, s_copy);
    int result = strcmp(str, s_copy);
    if (result > 0){
        result = 1;
    }else if (result < 0){
        result = -1;
    }else{
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}

int main(){
    char str[20];

    while (rewind(stdin), EOF != scanf("%s", str))
    {
        test(str);
    }
    return 0;
}
