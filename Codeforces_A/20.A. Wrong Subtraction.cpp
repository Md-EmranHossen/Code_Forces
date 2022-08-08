#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d;
    cin>>a>>b;

    for(int i=0; i<b; i++)
    {

        if((a%10)==0)
        {
            d=(a/10);
        }

        if((a%10)!=0)
        {
            d=a-1;
        }

        a=d;
    }

    cout<<a;
    
    return 0;
}

