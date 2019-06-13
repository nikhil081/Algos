#include <iostream>

using namespace std;

int main()
{   int i,n,j,temp;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    cin>>ar[i];
    for(i=1;i<n;i++){
        temp = ar[i];
        j=i-1;
        while(j>=0&&ar[j]>temp){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = temp;
    }
     for(i=0;i<n;i++)
    cout<<ar[i];
    return 0;
}
