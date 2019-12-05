#include<iostream>
using namespace std;

int a[1000]={0};

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        a[1] = 1;
        a[2] = 1;
        n+=4;
        int i;
        for(i = 3;i<=n;i++)
        {
            a[i] = a[i-1] +a[i-2];
        }
        printf("%d\n",a[n]);
    }
    return 0;
}
