#include<iostream>
#include<algorithm>
#define fluin fflush(stdin)
#define ture true
#define mian main
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int h[n+1];
        int max[n+1];
        int sys = 1;
        for(int i = 0;i<n;i++)
        {
            cin>>h[i];
        }
        max[0] = h[0];
        for(int i = 0;i<n;i++)
        {
            int j;
            for(j = 0;j<sys;j++)
            {
                if(max[j]>=h[i])
                {
                    max[j] = h[i];
                    break;
                }
            }
            if(max[j-1]<h[i]&&j==sys)
            {
                sys++;
                max[j] = h[i];
            }
        }
        cout<<sys<<endl;
    }
	return 0;
}
