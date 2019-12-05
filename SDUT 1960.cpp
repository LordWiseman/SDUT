#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct uni
{
    int a;
    double b;
    char c[30];
    int flag;
} u[100001];

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    char temp[20];
    for(int i = 0;i<n;i++)
    {
        scanf("%s",temp);
        if(strcmp(temp,"INT")==0)
        {
            scanf("%d",&u[i].a);
            u[i].flag = 1;
        }
        if(strcmp(temp,"DOUBLE")==0)
        {
            scanf("%lf",&u[i].b);
            u[i].flag = 2;
        }
        if(strcmp(temp,"STRING")==0)
        {
            scanf("%s",u[i].c);
            u[i].flag = 3;
        }
    }
    int q;
    for(int i = 0;i<m;i++)
    {
        scanf("%d",&q);
        if(u[q].flag == 1) cout<<u[q].a<<endl;
        if(u[q].flag == 2) printf("%.2f\n",u[q].b);
        if(u[q].flag == 3) cout<<u[q].c<<endl;
    }
    return 0;
}
