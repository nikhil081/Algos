#include <iostream>

using namespace std;

int main()
{   int serch(int[],int,int,int);
    int key,index,n,mid;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<"enter key";
    cin>>key;
    index = serch(ar,0,n-1,key);
    cout<<"index is"<<index+1;

    return 0;
}
int serch(int arr[],int b,int l,int k){
    int m;
 while(b<=l){
        m= b+(l-b)/2;
        if(arr[m]==k){
            return m;
        }else if (arr[m]>k)
        {
            l=m-1;
        }else if(arr[m]<k)
        {
            b=m+1;

        }

    }
    return -1;
}
