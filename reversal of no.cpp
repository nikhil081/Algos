#include <iostream>

using namespace std;

int main()
{
    int n,rem,reversee=0;
    cout<<"enter no";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        reversee=reversee*10+rem;
        n/=10;
    }
    cout<<"Reversed Number: "<<reversee<<endl;
    return 0;
}
