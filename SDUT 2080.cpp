#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;

int dp[505][505];

int main() 
{
    int ma;
    string a,b;
    while(cin>>a>>b)
    {
    int lena,lenb;
    lena = a.size();
    lenb = b.size();
    for(int i = 1;i<=lena;i++)
    {
        for(int j = 1;j<=lenb;j++)
        {
            if(a.at(i-1)==b.at(j-1)) dp[i][j] = dp[i-1][j-1] + 1;
            else
            {
                ma = dp[i][j-1];
                if(ma<dp[i-1][j]) ma = dp[i-1][j];
                dp[i][j] = ma;
            }
        }
    }
    /*for(int i = 0;i<20;i++)
        {
            for(int j = 0;j<20;j++)
            {
                cout<<dp[i][j]<<' ';
            }
            cout<<endl;
        }
    */
    cout<<dp[lena][lenb]<<endl;
    }
    return 0;
}