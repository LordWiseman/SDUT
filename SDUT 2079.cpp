#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

int main()
{
    int weight[1010];
    int price[1010];
    int T;cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        double ans = 0;
        for(int i = 0;i<m;i++)
        {
            cin>>price[i]>>weight[i];
        }
        for(int j = 0;j<m;j++)
        for(int i = 0;i<m-1;i++)
        {
            if(price[i+1]<price[i])
            {
                swap(price[i+1],price[i]);
                swap(weight[i+1],weight[i]);
            }
        }
        for(int i = 0;i<m;i++)
        {
            if(weight[i]*price[i]<=n)
            {
                n-=weight[i]*price[i];
                ans+=weight[i];
            }
            else
            {
                ans += (double)n/price[i];
                break;
            }
        }
        printf("%.2f\n",ans);
    }
    return 0;
}
