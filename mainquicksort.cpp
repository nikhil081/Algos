#include <iostream>

using namespace std;

int main()
{   int part(int[],int,int);
    void quick_sort(int[],int,int);
    int n;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    quick_sort(ar,0,n-1);
    for(int k=0;k<n;k++)
    cout<<ar[k];
    return 0;
}
int part(int ar[],int start,int en){
int pindex,pivot,temp=0,temp2=0;
pivot = ar[en];
pindex = start;
for(int i=start;i<en;i++){
    if(ar[i]<=pivot){
            temp = ar[i];
            ar[i]=ar[pindex];
            ar[pindex] = temp;
            pindex++;

    }
}
    temp2 = ar[en];
    ar[en] = ar[pindex];
    ar[pindex] = temp2;
    return pindex;


}
void quick_sort(int arr[],int start,int en){
int pi;
if(start<en){
pi = part(arr,start,en);
quick_sort(arr,start,pi-1);
quick_sort(arr,pi+1,en);
}
}
