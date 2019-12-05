#include<iostream>
using namespace std;

int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        int cou = 0;
        int max = -1;
        for(int i = 0;i<T;i++)
        {
            int sum[100] = {0};
            int n;
            for(int j = 0;j<5;j++)
            {
                scanf("%d",&n);
                sum[i] +=n;
            }
            if(sum[i]<85) cou++;
            if(max<sum[i]) max = sum[i];
        }
    cout<<cou<<' ';
    if(max>=85) cout<<max<<endl;
    else cout<<"No"<<endl;
    }
}
