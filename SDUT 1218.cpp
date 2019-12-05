#include<iostream>
using namespace std;

int main()
{
    long long s[100] = {0};
    int n;
    s[1] = 1;
    s[2] = 2;
    int i;
    while(scanf("%d",&n),n!=0)
    {
        i=0;
        if(n==1) printf("1\n");
        else if(n==2) printf("2\n");
        else
        {
            for(i = 3;i<=n;i++)
            {
                s[i] = s[i-1]+s[i-2];
            }
            printf("%lld\n",s[n]);
        }
    }
    return 0;
}
