#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

int position[10000][10000];

int main()
{
    int n;
    while(cin>>n)
    {
        int j;int i;
        for(j = 1;j<=n;j++)
        {
            for(i = 1;i<=j;i++)
            {
                cin>>position[j][i];
            }
        }
        for(int a = n-1;a>0;a--)
        {
            for(int b = 1;b<=a;b++)
            {
                if(position[a+1][b]<position[a+1][b+1])position[a][b] += position[a+1][b];
                else position[a][b] += position[a+1][b+1];
            }
        }
        cout<<position[1][1]<<endl;
    }
    return 0;
}
