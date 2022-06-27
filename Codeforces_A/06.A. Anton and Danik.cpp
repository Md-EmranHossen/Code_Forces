#include<iostream>
using namespace std;
int main()
{
    int n,i,countA=0,countD=0;
    char str[100000];
    cin>>n;
 
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }
 
    char x='A';
 
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==x)
            countA++;
    }
 
 
    char y='D';
 
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==y)
            countD++;
    }
 
    
    if(countA>countD)
    {
        cout<<"Anton"<<endl;
    }
 
 
    else if(countA<countD)
    {
        cout<<"Danik"<<endl;
    }
 
     
    else if(countA==countD)
    {
        cout<<"Friendship"<<endl;
    }
 
 
    return 0;
}
