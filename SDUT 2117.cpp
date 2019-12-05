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
    int a;scanf("%d",&a);
    N *p,*q;
    p = (N*)malloc(sizeof(N));
    p->next = NULL;
    for(int i = 1;i<a;i++)
    {
        scanf("%d",&p->n);
        q = (N*)malloc(sizeof(N));
        q->next = p;
        p = q;
    }
    scanf("%d",&p->n);
    for(;p!=NULL;p=p->next)
    {
        printf("%d ",p->n);
    }

    return 0;
}
