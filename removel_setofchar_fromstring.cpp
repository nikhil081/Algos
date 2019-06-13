#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string str;
   char chars[] = "hl";

    cin>>str;
    for (unsigned int i = 0; i < strlen(chars); ++i)
   {
      // you need include <algorithm> to use general algorithms like std::remove()
      str.erase (std::remove(str.begin(), str.end(), chars[i]), str.end());
   }

    cout<<str;
    return 0;
}
