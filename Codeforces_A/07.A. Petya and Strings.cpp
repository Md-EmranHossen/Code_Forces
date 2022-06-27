#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int i;
    string str1;
    string str2;
 
    getline(cin,str1);
    getline(cin,str2);
 
 
    for (int i = 0; i < str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
    }
 
 
    for (int i = 0; i < str2.length(); i++)
    {
        str2[i] = tolower(str2[i]);
    }
 
 
    int res = str1.compare(str2);
 
    if (res == 0)
        cout << "\n0" << endl;
 
    else if(res < 0)
        cout << "-1\n";
 
    else
        cout<<"1\n";
