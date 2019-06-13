#include <iostream>

using namespace std;
bool isprime(int n)
{
    for (int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }

        return true;
}
int main()
{
    int n;
    bool t = true;
    cin>>n;
    t = isprime(n);
    if(t==false){
        cout<<"not a prime";
    }else cout<<"isprime";

    return 0;
}
