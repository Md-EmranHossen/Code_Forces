#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
 
    string temp="hello";
 
    int x=0,count=0;
 
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==temp[x])
        {
            x++;
            count++;
        }
    }
  
  if(count==5)
  {
    cout<<"YES\n";
  }
   
 
  else 
  {
    cout<<"NO\n";
  }
 
 return 0;
 
}
