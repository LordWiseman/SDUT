#include<iostream>
#include<algorithm>
using namespace std;

typedef struct node
{
    int b,e;
}Node;
bool cmp(Node x,Node y)
{
    if(x.e == y.e) return x.b<y.b;
    return x.e<y.e;
}

int main()
{
    int end;
    int ccount = 0;
    Node act[110];
    int n;while(cin>>n)
    {
        for(int i =0;i<n;i++)
        {
            cin>>act[i].b>>act[i].e;
        }
        sort(act,act+n,cmp);
        end = act[0].e;
        ccount=1;
        for(int i = 1;i<n;i++)
        {
            if(act[i].b>=end)
            {
                end = act[i].e;
                ccount++;
            }
        }
        cout<<ccount<<endl;
    }
    return 0;
}
