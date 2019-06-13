#include <iostream>

using namespace std;


void leftrotatebyone(int* ar, int n)
{
    int temp = ar[0];
    for(int i = 0; i<n; i++)
    {
        ar[i] = ar[i+1];
    }
    ar[n-1]=temp;
}

void leftrotate(int * ar, int n, int k)
{
    for(int i=0; i<=k; i++)
    {
        leftrotatebyone(ar,n);
    }
}


int main()
{

    int n,i,k;

    cin>>n;
    int * ar= new int [n];

    for(int i=0; i<n; i++)
        cin>>ar[i];

    cin>>k;
    leftrotate(ar,n,k);
    for(int i=0;i<n;i++){
        cout<<ar[i]<< ' ' ;
    }
    return 0;
}

