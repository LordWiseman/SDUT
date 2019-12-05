#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double h,t;
        scanf("%lf %lf",&h,&t);
        double l = h;
        for(int i =0;i<t;i++)
        {
            h/=2;
            l +=h*2;
        }
        l-=2*h;
        printf("%.2f %.2f\n",l,h);
    }
    return 0;
}
