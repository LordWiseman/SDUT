#include<iostream>
using namespace std;

int main()
{

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int w1[5010],w2[5010],w3[5010];
        double sum[5010];
        int max = -1;
        int f = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>w1[i]>>w2[i]>>w3[i];
            sum[i] = (double)w1[i]*0.7+w2[i]*0.2+w3[i]*0.1;
            if(max<sum[i])
            {
                max = sum[i];
                f = i;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
