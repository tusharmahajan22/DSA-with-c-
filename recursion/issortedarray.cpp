#include <iostream>
#include <string>
using namespace std;

bool issorted(int arr[],int n){
    int s=0;
    int l=n-1;

    if(n==0){
        return true;
    }
    if(n==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,n-1);
    }
}


int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    bool ans= issorted(arr,5);
    if(ans){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    

    return 0;
}