#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,count=0;
    string str;

    cin>>str;


    for(i=0; i<str.length(); i++)
    {
        int flag=0;
        for(j=i+1; j<str.length(); j++)
        {


            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }


        if(flag==0)
        {
            count++;
        }
    }


    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
