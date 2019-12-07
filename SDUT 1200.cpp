#include<iostream>
using namespace std;
void move(int num,char x,char y)
{
    printf("Move disk %d from %c to %c\n",num,x,y);
}

void hanoi(int num,char a,char b,char c)
{
    if(num==1)
    {
        move(1,a,c);
        return;
    }
    else
    {
        hanoi(num-1,a,c,b);
        move(num,a,c);
        hanoi(num-1,b,a,c);
    }
}

int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}
