#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cost,n_dollar,b_number,borrow=0;

    cin>>cost>>n_dollar>>b_number;


    for(int i=1;i<=b_number;i++)
    {
         borrow=borrow+(cost*i);  
    }

   if(n_dollar<borrow)
   {

    cout<<abs(n_dollar-borrow)<<endl;
    
    }

    else
        cout<<"0"<<endl;
    
    return 0;

}
