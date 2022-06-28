#include<iostream>
#include<string>
using namespace std;
int main()
{
  
  int i,j,count;
  string str;
  cin>>str;

  int a=str.size();

  for(i=0;i<str.size();i++)
  {
     
     for(j=i+1;j<str.size();j++)
     {
        if(str[i]==str[j])
        {
            count++;
            break;
        }
     }

  }


    int d=a-count;


    if(d%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    
    else
        cout<<"IGNORE HIM!"<<endl;


    return 0;


}
