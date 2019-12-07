#include<iostream>
using namespace std;

int cau(int m,int n)
{
    if(m==0) return n+1;
    if(m>0&&n==0) return cau(m-1,1);
    if(m>0&&n>0) return cau(m-1,cau(m,n-1));
}

int main()
{
    int n,m;
    while(cin>>m)
    {
        cin>>n;
        cout<<cau(m,n)<<endl;
    }
    return 0;
}
