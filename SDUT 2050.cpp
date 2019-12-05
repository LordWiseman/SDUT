#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[110] = {0};
    a[1]=2;
    for(int i = 2;i<=100;i++)
    {
        a[i] = a[i-1] +i;
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",a[n]);
    }


    return 0;
}
