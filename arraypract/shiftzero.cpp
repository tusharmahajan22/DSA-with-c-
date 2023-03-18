#include <iostream>
using namespace std;
void binarysearch(int arr[])
{
   int n=7;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
        }
    }
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr1[7] = {2,0,1,3,10,9,0};
    binarysearch(arr1);
    

    return 0;
}