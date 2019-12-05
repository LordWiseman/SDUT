#include<iostream>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int max = 0;
        int cou = 0;
        int p[5000];int c[5000];
        for(int i = 0;i<n;i++)
        {
            scanf("%d %d",&p[i],&c[i]);
            if(max<p[i])
            {
                max = p[i];
                cou++;
            }
        }
        int cmax;
        for(int i = 0;i<n;i++)
        {
            if(p[i]==max&&cmax<c[i]) cmax = c[i];
        }
        for(int i = 0;i<n;i++)
        {
            if(p[i]==max&&c[i]==cmax)
            {
                printf("%d",i);
                break;
            }
        }

    }
    return 0;
}
