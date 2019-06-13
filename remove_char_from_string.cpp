#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string str;
    char c ='h';
    cout<<"enter string";
    cin>>str;
    str.erase(remove(str.begin(),str.end(),c),str.end());
    cout<<str;
    return 0;
}
