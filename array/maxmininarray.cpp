#include <iostream>
using namespace std;
void maxmin(int arr[],int n){


    int min=INT_MAX;             //for min value;
    for (int i=0;i<n;i++){        
        if(arr[i]<min){
            min=arr[i];
        }
    }

    int max=INT_MIN;             //for max value;
    for (int i=0;i<n;i++){       
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;



}


int main (){
    int arr[5]={66,899,99,2,17};
    maxmin(arr,5);
    

    return 0;
} 