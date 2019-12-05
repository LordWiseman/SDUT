#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
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
        int cnt = 2;
        prev = head;
        cur = prev->next;
        int num = 1;
        while(cnt!=5||cur->data!=1)
        {
            if(cnt == 5)
            {
            cur = cur->next;
            prev->next = cur;
            cnt=1;
            num++;
            }
            cnt++;
            cur=cur->next;
            prev = prev->next;
        }
        printf("%d\n",num);
    }
    return 0;
}
