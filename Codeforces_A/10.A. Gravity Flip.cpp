#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
 
    cin>>n;
 
    int A[n];
 
 
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
 
 
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[j]<=A[i])
            {
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
 
 
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
 
 
    return 0;
}
