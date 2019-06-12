#include <iostream>

using namespace std;

int main()
{
   int n,i,j,temp;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar[j]>ar[j+1])
               {
                    temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
               }

        }
    }
    for(int k=0;k<n;k++)
    cout<<ar[k];
    return 0;
}
