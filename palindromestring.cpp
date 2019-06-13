#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main()
{
    char str[50],str1[50];
    cout<<"enter string";
    cin>>str;
    strcpy(str1,str);
    strrev(str1);
    if(strcmp(str,str1)==0){
        cout<<" a palindrome";
    }else cout<<"not a palindrome";
    return 0;
}
