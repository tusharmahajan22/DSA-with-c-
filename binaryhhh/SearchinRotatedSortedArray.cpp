#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binarysearchh(int arr[],int s,int l,int key){
    int start=s;
    int end=l;
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
int tatata(int arr[],int ele){
    int key =3;
    if(key>=arr[ele] && key<=arr[6]){
        return binarysearchh(arr,ele,6,key);
    }
    else{
        return binarysearchh(arr,0,ele-1,key);
    }
}

int main() {
    int arr[7] = {4,5,6,7,0,1,2};
    int pivotele=getPivot(arr, 5);
    cout<<tatata(arr,pivotele);
}