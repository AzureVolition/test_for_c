#include <stdio.h>
 

#define MAX_SIZA 50
#define ERROR false;
typedef int Element;

typedef struct LinearTable{
    Element values[MAX_SIZA];
    int length = 0;
} LinearTable, *LineTabPnt;

void printList(LinearTable &ltp){
    for (int i = 0; i < ltp.length;i++)
    {
        printf("%3d", ltp.values[i]);
    }
    printf("\n");
    return;
}

bool listAdd(LinearTable &ltp, Element &t){
    if (ltp.length + 1 > MAX_SIZA){
        return false;
    }
    ltp.values[ltp.length] = t;
    ltp.length++;
    return true;
}

bool listDelete(LinearTable &ltp, int delp){
    if (delp < 0 || delp > ltp.length - 1){
        return false;
    }
    for (int j = delp; j < ltp.length - 1;j++)
    {
        ltp.values[j] = ltp.values[j + 1];
    }
    ltp.length = ltp.length - 1;
    return true;
}
bool listInsert(LinearTable &ltp, int index, Element &insp){
    if (ltp.length + 1 > MAX_SIZA){
        return false;
    }
    if (index < 0 || index > ltp.length){
        return false;
    }
    for (int j = ltp.length; j > index; j--)
    {
        ltp.values[j] = ltp.values[j - 1];
    }
    ltp.values[index] = insp;
    ltp.length = ltp.length + 1;
    return true;
}
Element listGet(LinearTable &ltp, int getp){
    if (getp < 0 || getp > ltp.length - 1){
        return ERROR;
    }
    return ltp.values[getp];
}

int main(){
    LinearTable list;
    list.values[0] = 1;
    list.values[1] = 2;
    list.values[2] = 3;
    list.length = 3;

    int i;
    scanf("%d", &i);
    listInsert(list, 1, i);
    printList(list);

    int delIndex;
    scanf("%d", &delIndex);
    bool isLegal;
    int m = delIndex - 1;
    isLegal = listDelete(list, m);
    if (isLegal)
    {
        printList(list);
    }else{
        printf("false\n");
    }
    return 0;
}