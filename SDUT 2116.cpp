#include<iostream>
#include<algorithm>
using namespace std;
typedef struct num
{
    int n;
    struct num *next;
}N;
int main()
{
    int a;
    scanf("%d",&a);
    N *p,*q,*head;
    p = (N*)malloc(sizeof(N));
    head = p;
    for(int i = 0;i<a-1;i++)
    {
        scanf("%d",&p->n);
        q = (N*)malloc(sizeof(N));
        p->next = q;
        p=q;
    }
    scanf("%d",&p->n);
    p->next = NULL;
    for(p = head;p!=NULL;p=p->next)
    {
        if(p->next==NULL) printf("%d\n",p->n);
        else printf("%d ",p->n);
    }
    return 0;
}
