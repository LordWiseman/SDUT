#include<iostream>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n),n!=0)
    {
        int t = 1;
        for(int i = 1;i<n;i++)
        {
            t=(t+1)*2;
        }
        printf("%d\n",t);

    }
    return 0;
}
