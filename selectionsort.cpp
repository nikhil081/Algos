#include <iostream>

using namespace std;

int main()

{

    int n,i,j,min_index;
    cout<<"how many elements";
    cin>>n;
    int ar[n];
    cout<<"enter array";
    for(i=0;i<n;i++)
    cin>>ar[i];
    for(i=0;i<n-1;i++)
        {
                min_index = i;
                for(j=i+1;j<n;j++)
                {
                    if(ar[j]<ar[min_index])
                    {
                        min_index = j;
                    }
                }
        int temp =ar[i];
		ar[i]=ar[min_index];
		ar[min_index]=temp;


        }
    for(i=0;i<n;i++)
    cout<<ar[i];
    return 0;
}




