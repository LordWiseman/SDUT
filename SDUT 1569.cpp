#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    char name[100];
    int height;
    int weight;
} N[1000];
bool cmp(struct node x,struct node y)
{
    if(x.height==y.height) return x.weight<y.weight;
    return x.height<y.height;
}

int main()
{
    int T;scanf("%d",&T);
    int a,b,c,d;
    for(int i = 0;i<T;i++)
    {
        scanf("%s %d %d",N[i].name,&N[i].height,&N[i].weight);
        scanf("%d %d %d %d",&a,&b,&c,&d);
    }
    sort(N,N+T,cmp);
    int cou =0;
    for(int i = 0;i<T;i++)
    {
        if(N[i].height>=a&&N[i].height<=b&&N[i].weight>=c&&N[i].weight<=d)
        {
            cou++;
            printf("%s %d %d\n",N[i].name,N[i].height,N[i].weight);
        }
    }
    if(cou==0)
        printf("No\n");
    return 0;
}
