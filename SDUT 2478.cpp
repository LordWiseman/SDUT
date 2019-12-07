#include<iostream>
using namespace std;

const int N = 1e6 + 10;

int quick_sort_n(int q[],int l,int r,int k)
{
    if(l>=r) return q[l];
    int i = l-1,j = r+1,x = q[(l+r)/2];
    while(i<j)
    {
        do i++;while(q[i]>x);
        do j--;while(q[j]<x);
        if(i<j) swap(q[i],q[j]);
    }
    int mark = j-l+1;
    if(mark>=k) return quick_sort_n(q,l,j,k);
    else return quick_sort_n(q,j+1,r,k-mark);
}

int q[N];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&q[i]);
        }
        int k;
        int m;
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&k);
            printf("%d\n",quick_sort_n(q,0,n-1,k));
        }
    }
    return 0;
}
