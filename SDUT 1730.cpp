#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

int a[1000][1000];
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i = 0;i<n;i++)
        for(j = 0;j<=i;j++)
            scanf("%d",&a[i][j]);

    for(i = n-1;i>=0;i--)
    {
        for(j = 0;j<=i;j++)
        {
            if(a[i+1][j]<=a[i+1][j+1]) a[i][j] += a[i+1][j+1];
            else a[i][j] += a[i+1][j];
        }
    }
    printf("%d\n",a[0][0]);
    return 0;
}
