#include<iostream>
using namespace std;

typedef struct node
{
    struct node *last;
    int data;
    struct node *next;
}Node;


int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    Node *head,*cur,*prev;
    head = (Node*)malloc(sizeof(Node));
    prev = head;
    prev->last = NULL;
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&prev->data);
        if(i==n-1) break;
        cur = (Node*)malloc(sizeof(Node));
        prev->next = cur;
        cur->last = prev;
        prev = cur;
    }
    prev->next=NULL;
    Node *temp;
    for(int i = 0;i<m;i++)
    {
        int t;
        scanf("%d",&t);
        cur = head;
        while(cur->data!=t)
        {
            cur = cur->next;
        }
        if(cur->last!=NULL) prev = cur->last;
        if(cur->next!=NULL) temp = cur->next;
        if(cur->next==NULL) printf("%d\n",prev->data);
        else if(cur->last==NULL) printf("%d\n",temp->data);
        else printf("%d %d\n",prev->data,temp->data);
    }
    return 0;
}
