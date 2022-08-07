#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;

    cin>>s;


    for(int i=0; i<s.size(); i++)
    {
        if(s[0]>='A' && s[0]<='Z')
        {
            cout<<s[i];
        }

        else
        {
            s[0]=s[0]-32;
            cout<<s[i];
        }
    }

    return 0;
}
