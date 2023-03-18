#include <iostream>
using namespace std;

void findduplicates(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                
            }
        }
    }
}

int main (){
    
    int arr[6]={5,2,4,3,4,2};

    findduplicates(arr,6);

    return 0;
} 