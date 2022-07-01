#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,count1=0,count2=0,j;
    string str;
   

   cin>>str;
    
    for(i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            count1 ++;
        }

        if(str[i]>='a' && str[i]<='z')
        {
            count2 ++;
        }

    }


   
    if(count1>count2)
    {
        for(i=0;i<str.length();i++)
        {
            for(j=0;j<str.length();j++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]-=32;
                }
            }
        }

        cout<<str<<endl;
    }
    
    
   else
    {
        for(i=0;i<str.length();i++)
        {
            for(j=0;j<str.length();j++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    str[i]+=32;
                }
            }
        }

        cout<<str<<endl;
    }

    return 0;
}
