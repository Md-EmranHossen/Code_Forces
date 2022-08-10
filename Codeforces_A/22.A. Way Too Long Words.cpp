#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
 
    for(int i=0; i<n; i++)
    {
        cin>>str;
 
 
        int d=(str.length()-2);
 
        if(str.length()>10)
        {
            cout<<str[0]<<d<<str[str.length()-1]<<endl;
        }
 
        else
        {
            cout<<str<<endl;
        }
    }
 
    return 0;
}
