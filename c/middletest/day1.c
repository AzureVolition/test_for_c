#include <stdio.h>

struct stu
{
    char name[20];
    char sex;
    int number;
};

int main(){
    struct stu p_d = {};
    struct stu *d = &p_d;
    scanf("%d %s %c",&d->number ,&d->name ,&d->sex);
    
    printf("%d %s %c",d->number ,d->name ,d->sex);
    return 0;
}