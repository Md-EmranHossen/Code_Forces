#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int i,n,j;
 
    cin>>n;
 
    string A;
 
    cin>>A;
    int count=0;
 
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
 
            if(A[i]==A[j])
                count++;
            break;
        }
 
    }
 
    cout<<count<<endl;
 
    return 0;
 
}
