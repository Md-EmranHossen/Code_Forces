#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
 
    string str;
 
    getline(cin,str);
    
    
    for(i=0;i<=str.length();i++)
    {
 
      if(str[i]>='A' && str[i]<='Z')
        str[i]+='a'-'A';
    }
 
 
    for(i=0;i<=str.length()-1;i++)
    {
 
      if(str[i]!=97  && str[i]!=101 &&str[i]!=105 && str[i]!=111 && str[i]!=117  && str[i]!=121)
      {
        cout<<"."<<str[i];
      }
 
    }
 
 
  return 0;
 
}
