#include<iostream>
using namespace std;
int main()
{

    int lw,bw,i,a=1,b=1;
    cin>>lw>>bw;


    for(i=1; i<10; i++)
    {

        lw=lw*3;
        bw=bw*2;

        if(lw<=bw)
            continue;


        else if(lw>bw)
            cout<<i<<endl;
        break;
    }
    return 0;
}
