#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid= start+ (end-start)/2;
    while(start <=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{   //i.e arr[mid]>key
            end=mid-1;
        }
        mid= start+ (end-start)/2;
    }
    return -1;

    

}

int main (){
    int arr[5]={9,45,78,89,90};
   
    int a=binarysearch(arr,5,90);

    cout<<"the index of 90 is: "<<a;


    return 0;
} 