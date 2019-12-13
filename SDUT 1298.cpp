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
    if(x.start == y.start) return x.end<y.end;
    return x.start<y.start;
}

int main()
{
    Node act[120];
    int n;cin>>n;
    for(int i = 0;i<n;i++)
    {
        act[i].no = i;
        cin>>act[i].start>>act[i].end;
    }
    sort(act,act+n,cmp);
    for(int i = 0;i<n;i++)
    {

    }

    return 0;
}
