#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
    int ID;
    int solved;
} s[10010];

bool cmp(struct student x,struct student y)
{
    return x.solved>y.solved;
}

int main()
{
    int T;scanf("%d",&T);
    while(T--)
    {
        int N;scanf("%d",&N);
        for(int i =0;i<N;i++)
        {
            scanf("%d %d",&s[i].ID,&s[i].solved);
        }
        int temp;
        for(int j=0;j<N-1;j++)
            for(int k=0;k<N-1-j;k++)
                if(s[k].solved<s[k+1].solved)
                {
                    temp=s[k].solved;
                    s[k].solved=s[k+1].solved;
                    s[k+1].solved=temp;
                    temp=s[k].ID;
                    s[k].ID=s[k+1].ID;
                    s[k+1].ID=temp;
                }
        for(int i =0;i<N;i++)
        {
            printf("%d %d\n",s[i].ID,s[i].solved);
        }
    }
    return 0;
}
