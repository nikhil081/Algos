#include <iostream>

using namespace std;

void rightrotatebyone(int* ar,int n)
{
    int temp = ar[n-1];
    for(int i=n-1; i>0; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[0] = temp;

}
void rightrotate(int* ar,int n,int k)
{
    for(int i =0 ; i<k; i++)
        rightrotatebyone(ar,n);
}
int main()
{
    int n,i,k;
    cout<<"how many elements";
    cin>>n;
    int * ar= new int [n];
    cout<<"enter array";
    for(int i=0; i<n; i++)
        cin>>ar[i];
    cout<<"how many times";
    cin>>k;
    rightrotate(ar,n,k);
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<< ' ' ;
    }
    return 0;
}
