#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[10];
    while(scanf("%s",c)!=EOF)
    {
        if(!strcmp(c,"red")) printf("Rose are %s.\n",c);
        else if(!strcmp(c,"orange")) printf("Poppies are %s.\n",c);
        else if(!strcmp(c,"yellow")) printf("Sunflower are %s.\n",c);
        else if(!strcmp(c,"green")) printf("Grass are %s.\n",c);
        else if(!strcmp(c,"blue")) printf("Bluebells are %s.\n",c);
        else if(!strcmp(c,"violet")) printf("Violets are %s.\n",c);
        else printf("I don't know about the color %s.\n",c);
    }
    return 0;
}
