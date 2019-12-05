#include<iostream>
using namespace std;

int main()
{
    int m;int n;
    cin>>m>>n;
    int t;
    int can[1010] = {0};
    while(n--)
    {
        scanf("%d",&t);
        can[t]++;
    }
    int max = -1;
    int flag = 0;
    for(int i = 1;i<=m;i++)
    {
        if(max<can[i])
        {
            max = can[i];
            flag = i;
        }
    }
    cout<<flag<<endl<<max<<endl;
    return 0;
}
