#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;



int main() 
{
    int n;cin>>n;
    int l[n];
    int num[n];
    memset(num,0,sizeof(num));
    memset(l,0,sizeof(l));
    for(int i = 0;i<n;i++)
    {
        cin>>num[i];
    }
    l[0] = 1;
    for(int i = 1;i<n;i++)
    {
        bool flag = true;
        for(int j = 0;j<i;j++)
        {
            if(num[i]>num[j]&&l[i]<=l[j])
            {
                l[i] = l[j] + 1; 
                flag = false;
            }
        }
        if(flag==true) l[i] = 1;
    }
    //for(int i = 0;i<n;i++) cout<<l[i]<<' ';
    int max = -1;
    for(int i = 0;i<n;i++)
    {
        if(l[i]>max) max = l[i];
    }
    cout<<max<<endl;
    return 0;
}