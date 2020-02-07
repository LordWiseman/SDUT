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
    int ratios;
}Node;
bool cmp(Node x,Node y)
{
    return x.ratios>y.ratios;
}

int main()
{
    int M;cin>>M;
    Node package[11];
    for(int i = 0;i<10;i++)
    {
        cin>>package[i].value>>package[i].weight;
        package[i].ratios = package[i].value/package[i].weight;
    }
    int totalweight = 0;
    int totalvalue = 0;
    sort(package,package+10,cmp);
    for(int i = 0;totalweight<M;i++)
    {
        if(totalweight + package[i].weight>M)
        {
            int tempweight;
            tempweight = M-totalweight;
            totalweight = M;
            totalvalue += tempweight*package[i].ratios;
        }
        else
        {
            totalweight +=package[i].weight;
            totalvalue += package[i].value;
        }
    }
    cout<<totalvalue<<endl;
    return 0;
}
