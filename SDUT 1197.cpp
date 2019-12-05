#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    Node *head,*cur,*prev;
    head = (Node*)malloc(sizeof(Node));
    prev = head;
    for(int i = 1;i<=n;i++)
    {
        prev->data = i;
        if(i==n) break;
        cur = (Node*)malloc(sizeof(Node));
        prev->next = cur;
        prev = cur;
    }
    prev ->next = head;
    if(m==1)
    {
        printf("%d\n",n);
        return 0;
    }

    int cnt = 2;
    prev = head;
    cur = prev->next;
    while(cur->next!=cur)
    {
        if(cnt == m)
        {
        cur = cur->next;
        prev->next = cur;
        cnt=1;
        }
        cnt++;
        cur=cur->next;
        prev = prev->next;
    }
    printf("%d\n",cur->data);
    return 0;
}
