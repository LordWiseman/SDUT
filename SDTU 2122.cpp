#include<iostream>
#include<algorithm>
using namespace std;
typedef struct node
{
    int n;
    struct node *next;
}N;

int temp[10000];
int cou = 0;
int main()
{
    int a;scanf("%d",&a);
    N *p,*q;
    p = (N*)malloc(sizeof(N));
    p->next = NULL;
    int i;
    for(i = 1;i<a;i++)
    {
        scanf("%d",&p->n);
        cou++;
        temp[i] = p->n;
        q = (N*)malloc(sizeof(N));
        q->next = p;
        p = q;
    }
    scanf("%d",&p->n);
    temp[i] = p->n;
    for(;p!=NULL;p=p->next)
    {
        printf("%d ",p->n);
    }

    return 0;
}
