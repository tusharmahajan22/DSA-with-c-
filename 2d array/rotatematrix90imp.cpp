#include <iostream>
using namespace std;

void rotatematrix(int arr[][3],int r,int c){

    for(int i=0;i<c;i++){
        for(int j=r-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;

    }
}

int main (){
    
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    rotatematrix(arr, 3, 3);

    
    return 0;
} 