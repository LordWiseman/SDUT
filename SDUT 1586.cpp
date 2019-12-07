#include<iostream>
using namespace std;

int cauculate(int x,int y)
{
    if(y==0) return 1;
    else if(x==1) return 1;
    else if(y==x) return 1;
    int res = 0;
    res = cauculate(x-1,y-1)+ cauculate(x-1,y);

    return res;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<cauculate(n,m)<<endl;
    }
    return 0;
}
