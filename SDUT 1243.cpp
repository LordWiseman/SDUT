#include<iostream>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        int i = 0;
        long long num[60]={0};
        for(i = 0;i<=5;i++) num[i] = i;
        if(n<5) printf("%d\n",n);
        else
        {
            for(i = 5;i<=n;i++)
            {
                num[i]=num[i-1]+num[i-3];
            }
            printf("%lld\n",num[n]);
        }
    }
    return 0;
}
