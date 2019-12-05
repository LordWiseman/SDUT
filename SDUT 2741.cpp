#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
    char name[20];
    int score;
} s[50];

bool cmp(struct student x,struct student y)
{
    return x.score>y.score;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%s %d",s[i].name,&s[i].score);
    }
    sort(s,s+n,cmp);
    for(int i = 0;i<n;i++)
    {
        printf("%s %d\n",s[i].name,s[i].score);
    }
    return 0;
}
