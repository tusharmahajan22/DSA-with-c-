#include <iostream>
using namespace std;

void mergethem(int *arr,int s,int e){
    int mid= s+ (e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mergeindex=s;

    for(int i=0;i<len1;i++){
        first[mergeindex++]=arr[i];
    }
    for(int i=0;i<len2;i++){
        first[mergeindex++]=arr[i];
    }


}

void sorto(int *arr[],int s,int e){
    if(s>=e){
        return;
    }

    int mid= s+ (e-s)/2;
    sorto(arr,s,mid);
    sorto(arr,mid+1,e);
    mergethem(arr,s,e);
}
int main()
{
    int arr[5]={22,8,99,1,12};
    sorto(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
