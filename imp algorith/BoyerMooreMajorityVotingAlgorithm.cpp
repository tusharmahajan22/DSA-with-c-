//for finding majority element in the array 

#include <iostream>
using namespace std;

int findelement(int arr[],int n){
    int ansindex=0;
    int count =1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[ansindex]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ansindex=i;
            count=1;
        }
    }
    return arr[ansindex];
}

bool majority(int arr[],int n,int ele){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    if(count> (n/2)){
        return 1;

    }

    else{
        return 0;
    }
}

void printmajority(int arr[],int n){
    int ele=findelement(arr,n);

    if(majority(arr,n,ele)){
        cout<<ele<<" ";
    }
    else{
        cout<<"naa mazza nhi aya";
    }
}

int main()
{
    int arr[5]={22,9,9,1,22};
    
    printmajority(arr,5);
    return 0;
}
