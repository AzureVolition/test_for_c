#include <stdio.h>

int paceCounter(int i){
    int result = 0;
    int last_pace = 1;
    int laster_pace = 0;
    for (int count = 1; count <= i;count++){
        result = last_pace + laster_pace;
        laster_pace = last_pace;
        last_pace = result;
    }
    return result;
}

int main_test(int i){
    //int i;
    //scanf("%d", &i);
    int *p = &i;
    printf("%d\n", paceCounter(*p));
    return 0;
 }

int main(){
    int i;
    while (rewind(stdin), EOF != scanf("%d", &i))
    {
        main_test(i);
    }
    return 0;
} 
