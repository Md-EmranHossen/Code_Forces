#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,count=0,i=0 ;
    cin>>n;
    int arr[n+1];
 
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            count++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(count==n && arr[i]==0)
        {
            cout<<"EASY";
            break;
        }
 
        else
        {
            cout<<"HARD";
            break;
        }
    }

    return 0;
}
