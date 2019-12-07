#include<iostream>
using namespace std;
int cau(int x,int y)
{
    if(x == 1 || y == 1) return 1;
    return cau(x-1, y) + cau(x, y-1);
}

int main()
{
    int n,m;
    while(cin>>n)
    {
        cin>>m;
        cout<<cau(n,m)<<endl;
    }
    return 0;
}
