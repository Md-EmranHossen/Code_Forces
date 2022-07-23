#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum1=0,sum2=0;
    int i=0;
    int j=n-1;
    int z=0;
 
    while(i<=j)
    {
 
        if(z%2==0)
        {
            if(a[i]>a[j])
            {
                sum1+=a[i];
                i++;
            }
 
            else
            {
 
                sum1+=a[j];
                j--;
            }
 
        }

 
        else
        {
            if(a[i]>a[j])
            {
                sum2+=a[i];
                i++;
            }
 
            else
            {
 
                sum2+=a[j];
                j--;
            }
        }
 
        z++;
 
    }
 
    cout<<sum1<<" "<<sum2<<endl;
 
}
