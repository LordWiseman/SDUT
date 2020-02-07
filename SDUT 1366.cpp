#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
const int inf = 0x3f3f3f3f;

int dp[100001][12] = {0};

int main() 
{
    int x;int t;
    int maxt = 0;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        if(n==0) break;
        while(n--)
        {
            scanf("%d %d",&x,&t);
            dp[t][x]++;
            if(maxt<t) maxt = t;
        }
        for(int i = maxt-1;i>=0;i--)
        {
            dp[i][0] += max(dp[i+1][0],dp[i+1][1]);
            for(int j = 1;j<=10;j++)
            {
                dp[i][j] += max(max(dp[i+1][j-1],dp[i+1][j]),dp[i+1][j+1]);
            }
        }
        cout<<dp[0][5]<<endl;
    }
    return 0;
}
