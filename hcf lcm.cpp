#include <iostream>

using namespace std;

int main()
{   int hcff(int,int);
    int a,b,h,l;
    cout<<"enter two nos";
    cin>>a>>b;
    h = hcff(a,b);
    cout<<h;
    return 0;
}
int hcff (int a,int b){
if(b==0){
    return a;
}
else return hcff(b,a%b);
}
