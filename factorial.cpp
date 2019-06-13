#include <iostream>

using namespace std;
int factr(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return n*factr(n-1);

}
int main()
{
    int n,res;
    cout<<"enter no";
    cin>>n;
    res = factr(n);
    cout<<res;
    return 0;
}
