#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;

ll m[N];
int s[N];
int main() 
{
    int n;
    while(cin>>n)
    {
        ll max = -1;
        memset(m,0,sizeof(m));
        memset(s,0,sizeof(s));
        for(int i = 0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i = 0;i<n;i++)
        {
            m[i] = s[i];
            bool flag = true;
            for(int j = 0;j<i;j++)
            {
                if(m[j]+s[i]>m[i]&&s[i]>s[j])
                {
                    m[i] = m[j] + s[i];
                    flag = false;
                }
            }
            if(flag == true) m[i] = s[i];
            if(m[i]>max) max = m[i];
        }
        cout<<max<<endl;
        /*for(int i = 0;i<n;i++)
        {
            cout<<m[i]<<' ';
        }*/
    }
    return 0;
}