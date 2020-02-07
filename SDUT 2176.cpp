#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

int func(int a,int b,int c);

int s[35][35][35] = {-1};

int main()
{
    for(int i = 0;i<21;i++)
    {
        for(int j = 0;j<21;j++)
        {
            for(int h =0;h<21;h++)
            {
                s[i][j][h] = func(i,j,h);
            }
        }
    }
    int a,b,c;
    while(cin>>a)
    {
        cin>>b>>c;
        cout<<func(a,b,c)<<endl;
    }
    return 0;
}

int func(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0) return 1;
    else if(s[a][b][c]>0) return s[a][b][c];
    else if(a>20||b>20||c>20) return  s[20][20][20];
    else if(a<b&&b<c) return func(a,b,c-1)+ func(a,b-1,c-1) - func(a,b-1,c);
    else return func(a-1,b,c) + func(a-1,b-1,c)+func(a-1,b,c-1)-func(a-1, b-1, c-1);
}
