#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

typedef struct node
{
    double weight;
    double price;
    double pw;
}Node;

bool cmp(Node x,Node y)
{
    return x.pw<y.pw;
}

int main()
{
    int n,m;
    Node storage[60];
    while(cin>>n>>m,n!=-1&&m!=-1)
    {
        for(int i = 0;i<m;i++)
        {
            cin>>storage[i].weight>>storage[i].price;
            storage[i].pw = storage[i].price/storage[i].weight;
        }
        sort(storage,storage+m,cmp);
        double total = 0.000;
        double current = 0.000;
        for(int i = 0;current<n;i++)
        {
            if(current+storage[i].price>n)
            {
                total += (n-current)/storage[i].pw;
                current = (double)n;
            }
            else
            {
                current += storage[i].price;
                total += storage[i].weight;
            }
        }
        printf("%.3f\n",total);
    }
}
