#include <iostream>

using namespace std;

int main()
{
    int k,a,b;
    cin>>a>>b;
    for(k=a;k>=1;k--){
        if((a%k==0)&&(b%k==0)){
            cout<<k;
            break;
        }
    }
    return 0;
}
