#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;
 typedef struct node
 {
     int weight;
     int value;
 } Node;

bool cmp(Node x,Node y)
{
    if(x.weight==y.weight) return x.value>y.value;
    return x.weight<y.weight;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int m;
        cin>>m;
        Node stone[10001];
        for(int i =0;i<n;i++)
        {
            cin>>stone[i].weight>>stone[i].value;
        }
        sort(stone,stone+n,cmp);
        int ans = 0;
        for(int i =0;i<m;i++)
        {
            ans += stone[i].value;
        }
        cout<<ans<<endl;
    }
    return 0;
}
