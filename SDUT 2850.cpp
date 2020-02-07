#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

typedef struct node
{
    int cur;
    int fut;
    int income;
}Node;

bool cmp(Node x,Node y)
{
    return x.income>y.income;
}

Node item[10000000];

int main()
{
    int n;
    while(cin>>n)
    {
        int m;
        cin>>m;
        for(int i = 0;i<n;i++)
        {
            cin>>item[i].cur>>item[i].fut;
            item[i].income = item[i].fut - item[i].cur;
        }
        sort(item,item+n,cmp);
        int total = 0;
        for(int i = 0;i<m;i++)
        {
            total += item[i].income;
        }
        cout<<total<<endl;
    }
    return 0;
}
