#include<iostream>
#include<algorithm>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
    int n;//输入链表
    Node *cur,*prev,*head;
    prev = (Node *)malloc(sizeof(Node));
    prev->next = NULL;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&prev->data);
        cur = (Node*)malloc(sizeof(Node));
        cur->next = prev;
        prev = cur;
    }
    head = cur;
    printf("%d\n",n);
    for(cur = head->next;cur!=NULL;cur=cur->next)
    {
        if(cur->next == NULL) printf("%d\n",cur->data);
        else printf("%d ",cur->data);
    }

    //遍历查重
    int dnum = 0;
    Node *temp;
    for(cur = head->next;cur->next!= NULL;cur = cur->next)
    {
        for(prev = cur->next,temp = cur;prev != NULL;prev = prev->next,temp = temp->next)
        {
            if(prev->data==cur->data)
            {
                dnum++;
                prev = prev ->next;
                temp->next = prev;
                cur = head;//attention
                prev = cur->next;
                temp = cur;
            }
        }
    }
    printf("%d\n",n-dnum);
    for(cur=head->next;cur!=NULL;cur=cur->next)
    {
        if(cur->next==NULL) printf("%d\n",cur->data);
        else printf("%d ",cur->data);
    }
    return 0;
}
