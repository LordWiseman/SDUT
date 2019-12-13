#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int k;
    while(cin>>a>>k)
    {
        if(k>=a.size()) a.erase();
        else while(k>0)
        {
            int i;
            for(i =0;i<a.size();i++)
                if(a[i]>a[i+1]) break;
            a.erase(i,1);
            k--;
        }
        while(a[0]=='0'&&a.size()>1) a.erase(0,1);
        cout<<a;
        if(a.size()==0) cout<<0;
        cout<<endl;
    }
    return 0;
}
