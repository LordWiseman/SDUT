#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
    int num;
    Node *cur,*prev,*head;
    prev = (Node*)malloc(sizeof(Node));
    head = prev;
    while(scanf("%d",&num),num!=-1)
    {
        cur = (Node*)malloc(sizeof(Node));
        cur->data = num;
        prev ->next = cur;
        prev = cur;
    }
    cur->next = NULL;

    Node *temp;
    prev = head->next;
    cur = prev ->next;
    temp = cur ->next;
    for(;prev->next!=NULL;prev = prev ->next)
    {
        cur->next = prev;
        prev = cur;
        if(temp !=NULL)cur = temp;
        if(temp !=NULL)temp = temp ->next;
    }
    temp = head->next;
    temp->next = NULL;
    head = cur;
/*
    Node *temp;
    prev = head;
    for(cur = head->next;cur->next!=NULL;cur = cur->next)
    {
        if(prev == head)
        {
            temp = cur->next;
            prev = prev->next;
            prev->next = NULL;
            temp = temp->next;
            continue;
        }
        cur->next = prev;
        prev = cur;
        cur = temp;
        temp = temp->next;
    }
    cur->next = prev;
    head = cur;
*/

    for(cur = head;cur!=NULL;cur=cur->next)
    {
        if(cur->next==NULL) printf("%d\n",cur->data);
        else printf("%d ",cur->data);
    }
    return 0;
}
