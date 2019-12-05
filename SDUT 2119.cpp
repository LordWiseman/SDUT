#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} Node;

void merge_sort_print(Node *head_1,Node *head_2)
{
    Node *head,*cur;
    head = (Node*)malloc(sizeof(Node));
    cur = head;
    while(head_1!=NULL&&head_2!=NULL)
    {
        if(head_1->data>head_2->data)
        {
            cur->next = head_2;
            cur = head_2;
            head_2 = head_2->next;
        }
        else
        {
            cur->next = head_1;
            cur = head_1;
            head_1 = head_1->next;
        }
    }
    while(head_1!=NULL)
    {
        cur->next = head_1;
        cur = head_1;
        head_1 = head_1->next;
    }
    if(head_2!=NULL)
    {
        cur->next = head_2;
        cur = head_2;
        head_2 = head_2->next;
    }
    for(cur = head->next;cur!=NULL;cur= cur->next)
    {
        if(cur->next !=NULL) printf("%d ",cur->data);
        else printf("%d\n",cur->data);
    }
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    Node *head_1,*cur_1,*prev_1;
    prev_1 = (Node*)malloc(sizeof(Node));
    head_1 = prev_1;
    scanf("%d",&prev_1->data);
    for(int i = 1;i<m;i++)
    {
        cur_1= (Node*)malloc(sizeof(Node));
        scanf("%d",&cur_1->data);
        prev_1->next = cur_1;
        prev_1=cur_1;
    }
    prev_1->next = NULL;

    Node *head_2,*cur_2,*prev_2;
    prev_2 = (Node*)malloc(sizeof(Node));
    head_2 = prev_2;
    scanf("%d",&prev_2->data);
    for(int i = 1;i<n;i++)
    {
        cur_2= (Node*)malloc(sizeof(Node));
        scanf("%d",&cur_2->data);
        prev_2->next = cur_2;
        prev_2=cur_2;
    }
    prev_2->next = NULL;
    merge_sort_print(head_1,head_2);
    return 0;
}
