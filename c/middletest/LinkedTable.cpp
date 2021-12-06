#include <stdio.h>
#include <stdlib.h>

#define END 9999
#define ERROR false

typedef int Element;

typedef struct LNode{
    Element value;
    struct LNode *next;
} LNode, *LinkList;

void addNode(LNode*& formerNode, LNode*& node){
    node->next = formerNode->next;
    formerNode->next = node;
}

LinkList tailAdd(LNode*& tailNode, LNode*& node){
    while (NULL != tailNode->next){
        tailNode = tailNode->next;
    }
    addNode(tailNode, node);
    return node;
}

LinkList headAdd(LNode*& head, LNode*& node){
    addNode(head, node);
    return head;
}

LinkList createHeadNode(){
    LinkList node;
    node = (LNode*) malloc(sizeof(LNode));
    node->next = NULL;
    return node;
}
LinkList createNewNode(Element x){
    LinkList node;
    node = (LNode*) malloc(sizeof(LNode));
    node->value = x;
    node->next = NULL;
    return node;
}

void printLinkedList(LNode *head){
    while (head = head->next,head != NULL){
        printf("%d", head->value);
        if (head->next != NULL){
            printf(" ");
        }
    }
    printf("\n");
}

LinkList creatTailLinkedList(){
    Element v;
    LinkList tail = createHeadNode();
    LinkList head = tail;
    while(scanf("%d", &v), END != v){
        LNode* newNode = createNewNode(v);
        tail = tailAdd(tail, newNode);
    }
    rewind(stdin);
    return head;
}

LinkList createHeadLinkedList(){
    Element v;
    LinkList head = createHeadNode();
    while(scanf("%d", &v), END != v){
        LNode* newNode = createNewNode(v);
        headAdd(head, newNode);
    }
    rewind(stdin);
    return head;
}


int main(){
    LinkList head = createHeadLinkedList();
    printLinkedList(head);
    head = creatTailLinkedList();
    printLinkedList(head);
    return 0;
}