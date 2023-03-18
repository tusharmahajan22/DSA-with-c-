#include <iostream>
using namespace std;
void bubblesorto(int arr[],int n){

    // bool isswapped= false;
    for(int i=0;i<n-1;i++){   //i depicts the no. of rounds
    
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                // isswapped=true;
            }
        }

        // if(isswapped==false){  //used to depict best case complexity in this if the given array is already swapped then it will break the loop this only only one loop has taken place and thus O(n)
        //     break;
        // }
    }
     
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }           
          
}

int main (){
    int arr[5]={1,2,3,4,5};
    int n=5;

    bubblesorto(arr,n);

    return 0;
} 