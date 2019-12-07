#include<iostream>
using namespace std;

int cau(int x,int y)
{
    if(x==0) return y+1;
    else return 2*cau(x-1,y);
}

int main()
{
    int m,n;
    while(cin>>m)
    {
        cin>>n;
        cout<<cau(m,n)<<endl;
    }
    return 0;
}
