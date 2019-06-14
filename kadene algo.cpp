#include <iostream>

using namespace std;
long int SubArraySum( int arr[], int n )
{
    int temp_sum=0,max_sum=0;
    temp_sum = arr[0];
    max_sum = arr[0];
    for(int i=1; i<n; i++)
    {
        temp_sum = max(arr[i],temp_sum+arr[i]);
        if(max_sum<temp_sum){
            max_sum = temp_sum;
        }
    }
    return max_sum;
}
int main()
{
    int arr[] = {-2, 3, 4,-2} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of SubArray : "
         << SubArraySum(arr, n) << endl;
    return 0;
}
