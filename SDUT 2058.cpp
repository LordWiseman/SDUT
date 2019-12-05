#include<iostream>
using namespace std;

int main()
{
    long long a[30] = {0};
    a[1] = 0;
    a[2] = 1;
    for(int i = 3;i<=20;i++)
    {
        a[i] = (i-1)*(a[i-1]+a[i-2]);
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",a[n]);
    }
    return 0;
}
