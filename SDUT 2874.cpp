#include<iostream>
#include<algorithm>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int num = 0;
        int m;
        Node *head,*cur,*prev,*temp;
        head = (Node*)malloc(sizeof(Node));
        head ->next = NULL;
        for(int i = 0;i<n;i++)
        {
            cur = (Node*)malloc(sizeof(Node));
            scanf("%d %d",&m,&cur->data);
            if(m>=num)
            {
                prev = head;
                for(int j = 0;j<num;j++)
                {
                    prev = prev->next;
                }
                prev->next = cur;
                cur->next = NULL;
            }
            else
            {
                prev = head;
                for(int j = 0;j<m;j++)
                {
                    prev = prev->next;
                }
                temp = prev->next;
                prev->next = cur;
                cur->next = temp;
            }
            num++;
        }
        for(cur = head->next;cur!=NULL;cur=cur->next)
        {
            if(cur->next==NULL) printf("%d",cur->data);
            else printf("%d ",cur->data);
        }
        puts("");
    }
    return 0;
}
