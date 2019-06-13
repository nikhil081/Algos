#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[50];
    cout<<"enter string";
    cin>>str;
    for(int i = strlen(str); i>=0;i--){
        cout<<str[i];
    }
    return 0;
}
