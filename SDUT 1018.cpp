#include<iostream>
using namespace std;
long long num[1000] = {0};
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        num[1]=1;
        num[2]=2;
        for(int i = 3;i<=n;i++)
        {
            num[i]=num[i-1]+num[i-2];
        }
        if(n>=3) printf("%lld\n",num[n]);
        else printf("%d\n",n);
    }
    return 0;
}
