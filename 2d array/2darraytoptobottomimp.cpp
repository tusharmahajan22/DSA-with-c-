#include <iostream>
using namespace std;

void findrowsum(int arr[][3],int n,int m){

     for(int i=0;i<3;i++){
        if(i%2==0){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        }
        else{
            for(int j=2;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        }
        cout<<endl;
    }
}
 
int main (){
    
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    findrowsum(arr,3,3);

    return 0;
} 

//complexity----->>> O(rows x col.) 