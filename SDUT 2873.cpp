#include<iostream>
#include<algorithm>
using namespace std;
struct item
{

    int w;
    int p;
} it[100];
bool cmp(struct item x,struct item y)
{
    if(x.w==y.w) return x.p>y.p;
    return x.w<y.w;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = 0;i<n;i++)
            scanf("%d",&it[i].w);
        for(int i = 0;i<n;i++)
            scanf("%d",&it[i].p);
        sort(it,it+n,cmp);
        for(int i = 0;i<n;i++)
        {
            printf("%d %d\n",it[i].w,it[i].p);
        }
    }
    return 0;
}
