#include <iostream>

using namespace std;

int main()

{   void mergesort(int[],int,int);
    void mergee(int[],int,int);
    int n,i,j,temp;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
    cin>>ar[i];

    mergesort(ar,0,n);

    return 0;
}
void mergee (int [] arr, int s, int m, int e){
int i,j,k,n1,n2;
n1 = m-s+1;
n2 = e-m;
int left[30],right[30];
for(i=0;i<n1;i++)
    left[i] = arr[s+i];
for(j=0;i<n2;j++)
    right[j] = arr[m+1+j];
i=0;
j=0;
k=s;
while(i<n1&&j<n2){
    if(left[i]<=right[j]){
        arr[k] = left[i];
        i++
    }else {
    arr[k] = right[j];
    j++;
    }
    k++;
}
while(i<n1){
    arr[k] = left[i];
    i++;
    k++;
}
while(j<n2){
    arr[k] = right[j];
    j++;
    k++;
}

}
}
void mergesort(int[] arr, int s ,int e){
if(s<e){
        int m = s + (e-s)/2;

    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    mergee(arr,s,m,e);
}
}
