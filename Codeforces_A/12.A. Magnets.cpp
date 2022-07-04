#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n;

    cin>>n;

    string A;

    cin>>A;

    int count=1;

    for(i=2; i<=n; i++)
    {

        string Z;
        cin>>Z;

        if(Z!=A)
            count++;
        A=Z;
    }

    cout<<count;
}
