#include <iostream>
using namespace std;
void sorto(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    int arr[5]={22,33,8,99,10};
    int n=5;
    sorto(arr,n);

    return 0;
} 

//space compl: O(1)
//time compl: O(N^2)