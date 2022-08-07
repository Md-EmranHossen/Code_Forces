#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
    string s;
 
    cin>>s;
    sort(s.begin(),s.end());
 
    int d=s.size();
 
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
 
        else
        {
            cout<<s[i];
            if(i>0 && i<d-1)
            {
                cout<<"+";
            }
 
        }
    }
 
    return 0;
}
