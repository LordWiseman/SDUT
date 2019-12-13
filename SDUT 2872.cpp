#include<iostream>
using namespace std;
int a[30000000];

int main()
{
    int n;scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q;scanf("%d",&q);
    while(q--)
    {
        int tgt;scanf("%d",&tgt);
        int l = 0;
        int r = n-1;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(a[mid]>=tgt) r=mid;
            else l = mid+1;
        }
        if(a[l]!=tgt) printf("-1\n");
        else printf("%d\n",l+1);
    }
    return 0;
}
