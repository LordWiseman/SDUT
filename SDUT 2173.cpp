#include<iostream>
using namespace std;

int main()
{
    long long a[100] = {0};
    a[1] = 1;
    a[2] = 2;
    for(int i = 3;i <=50;i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        printf("%lld\n",a[m]);
    }


    return 0;
}
