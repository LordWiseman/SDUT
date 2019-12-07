#include<iostream>
using namespace std;

int main()
{
    int pos[20][20] = {0};
    pos[0][0] = 1;
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int d[20][20] = {0};
    d[x][y] = 1;
    d[x-2][y+1] = 1;d[x-2][y-1]= 1;
    d[x+2][y+1] = 1;d[x+2][y-1]= 1;
    d[x-1][y+2] = 1;d[x+1][y+2]= 1;
    d[x-1][y-2] = 1;d[x+1][y-2]= 1;
    for(int i = 0;i<20;i++)//初始化上边界
        if(!d[0][i]) pos[0][i] = 1;
        else break;
    for(int i = 0;i<20;i++)//初始化左边界
        if(!d[i][0]) pos[i][0] = 1;
        else break;
    for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {//每个点的路径数都是左边与上边路径数之和
                if(!d[i][j]) pos[i][j] += pos[i - 1][j]+pos[i][j-1];
            }
        }
    printf("%d\n",pos[n][m]);

    return 0;
}
