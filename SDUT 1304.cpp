#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
const int inf = 0x3f3f3f3f;

int a[12][12];
int m,n;
int res = inf;
void dfs(int x,int y,int num);

int main() 
{
    cin>>m>>n;
    for(int i = 0;i<m;i++)
        for(int j = 0;j<n;j++)
            cin>>a[i][j];
    dfs(0,0,a[0][0]);

    if(res<0) cout<<"-1"<<endl;
    else cout<<res<<endl;
    return 0;
}

void dfs(int x,int y,int num)
{
    if(x==m-1&&y==n-1)
        if(num>0&&num<res)
        {
            res = num;
            return ;
        }

    if(x<m-1) dfs(x+1,y,num+a[x+1][y]);
    if(y<n-1) dfs(x,y+1,num+a[x][y+1]);

}