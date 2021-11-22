#include <stdio.h>

int main()
{
    char c;
    while (EOF != scanf("%c", &c))
    {
        if (c != '\n')
        {
            printf("%c", c - 32);
        }else{
            printf("\n");
        }
        
    }
    return 0;
}
