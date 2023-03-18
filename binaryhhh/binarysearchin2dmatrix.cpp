//Search a 2D Matrix(Leetcode)

#include <iostream>
using namespace std;

bool searchit(int arr[][4],int key){

    int start=0;
    int end=(4*3)-1;
    int row=3;
    int col=4;

    int mid= start+(end-start)/2;

    while(start<end){
        int element =arr[mid/col][mid%col];                //imp formulae for binar search

        if(element==key){
            cout<<"at index"<<(mid/col)<<"and"<<(mid%col);
            return 1;
        }

        else if(element>key){
            end=mid-1;
        }

        else if(element<key){
            start=mid+1;
        }

        mid= start+(end-start)/2;
    }

    return 0;


}

int main (){
    
    int matrix [3][4]= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cin>>key;

    if(searchit(matrix,key)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


    return 0;
} 

//time complexity---->>>> O(row x col.)