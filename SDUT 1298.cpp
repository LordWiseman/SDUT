#include<iostream>
#include<algorithm>
using namespace std;
typedef struct node
{
    int no = 0;
    int con = 0;
    int start = 0;
    int end = 0;
} Node;

bool cmp(Node x,Node y)
{
    if(x.end == y.end) return x.start<y.start;
    return x.end<y.end;
}

int main()
{
    int end;
    Node act[120];
    int n;cin>>n;
    for(int i = 0;i<n;i++)
    {
        act[i].no = i+1;
        cin>>act[i].start>>act[i].end;
    }
    sort(act,act+n,cmp);
    cout<<act[0].no;
    end = act[0].end;
    for(int i = 1;i<n;i++)
    {
        if(act[i].start>=end)
        {
            end = act[i].end;
            cout<<','<<act[i].no;
        }
    }
    cout<<endl;
    return 0;
}
