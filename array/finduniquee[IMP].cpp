#include <iostream>
using namespace std;

void uniqeelem(int arr[],int n){

    int xorr=0;
    
    for(int i=0;i<n;i++){
        xorr=xorr ^ arr[i];
    }

    cout<<xorr<<endl;
}


int main (){

    int arr[7]={2,3,1,6,3,6,2};
    uniqeelem(arr,7);

    

    return 0;
} 

// in this the concept of xor is used that is " ^ ", wherein 0^a=a ; a^a=0