#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}Node;

void sort_divide(Node *head,Node *head_1,Node *head_2)
{
    Node *cur,*prev_1,*prev_2;
    prev_1 = head_1;
    prev_2 = head_2;
    for(cur=head->next;cur!=NULL;)
    {
        if(cur->data%2==0)
        {
            prev_1->next = cur;
            prev_1 = cur;
            cur=cur->next;
        }
        else
        {
            prev_2->next = cur;
            prev_2 = cur;
            cur = cur ->next;
        }
    }
    prev_1 ->next = NULL;
    prev_2 ->next = NULL;
}

int main()
{
    int n;scanf("%d",&n);
    Node *head,*cur,*prev;
    prev = (Node*)malloc(sizeof(Node));
    head = prev;
    for(int i = 0;i<n;i++)
    {
        cur = (Node*)malloc(sizeof(Node));
        scanf("%d",&cur->data);
        prev ->next = cur;
        prev = cur;
    }
    cur->next = NULL;
    Node *head_1,*head_2;
    head_1 = (Node*)malloc(sizeof(Node));
    head_2 = (Node*)malloc(sizeof(Node));
    sort_divide(head,head_1,head_2);
    int count_1 = 0,count_2 = 0;
    for(cur = head_1->next;cur!=NULL;cur=cur->next) count_1++;
    for(cur = head_2->next;cur!=NULL;cur=cur->next) count_2++;
    printf("%d %d\n",count_1,count_2);
    for(cur = head_1->next;cur!=NULL;cur=cur->next)
    {
        if(cur->next!=NULL) printf("%d ",cur->data);
        else printf("%d\n",cur->data);
    }
    for(cur = head_2->next;cur!=NULL;cur=cur->next)
    {
        if(cur->next!=NULL) printf("%d ",cur->data);
        else printf("%d\n",cur->data);
    }
    return 0;
}
