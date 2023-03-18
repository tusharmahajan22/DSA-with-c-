#include <iostream>
using namespace std;
void rotatearr(int arr[]){
    int k=3;        //no of places to be shifted 
    int n=7;
    int ans[n];
    

    for(int i=0;i<n;i++){
        ans[(i+k)%n]=arr[i];        //universal formulae to rotate an array [IMP]
    }
    
    

    for(int a=0;a<7;a++){
        cout<<brr[a]<<" ";
    }
}


int main (){

    int arr[7]={1,2,3,4,5,6,7};
    rotatearr(arr);
    return 0;
} 