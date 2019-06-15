#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   char str[] = "nikhil";
    stack<char> s;
    for(int i=0;i<strlen(str);i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
