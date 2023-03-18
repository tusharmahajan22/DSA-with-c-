#include <iostream>
using namespace std;
void intersectiona(int arr1[],int arr2[],int n,int m){

    int i=0;
    int j=0;

    while(i<n && j<m){

        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" "; 
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }

    }
}

int main (){
    int arr1[3]={1,4,5};
    int arr2[3]={3,4,5};

    intersectiona(arr1,arr2,3,3);

    return 0;
} 