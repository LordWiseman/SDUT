#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main


int main()
{
    int p[210]={0};
    int n,m;
    while(std::cin>>n>>m)
    {
        int pt[210] = {0};
        for(int i =0;i<n;i++)
        {
            std::cin>>p[i];
        }
        std::sort(p,p+n);
        int l[60] = {0};
        for(int i = 0;i<m-1;i++)
        {
            int j;
            int max = -1;
            int t = -1;
            for(j = 1;j < n;j++)
            {
                if(p[j]-p[j-1]>max&&pt[j]!=1)
                {
                    max = p[j]-p[j-1]-1;
                    t = j;
                }
            }
            pt[t] = 1;
            l[i] = max;
        }
        int ans = 0;
        ans =  p[n-1]-p[0]+1;
        for(int i = 0;i<m-1;i++)
        {
            ans-=l[i];
        }
        std::cout<<ans<<std::endl;
    }
	return 0;
}
