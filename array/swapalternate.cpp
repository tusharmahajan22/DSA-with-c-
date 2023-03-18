#include <iostream>
using namespace std;
void reversea(int arr[], int n)
{

    for (int i = 0; i < n; i = i + 2)
    {
        if(i+1<n){

        swap(arr[i], arr[i + 1]);}
    }


    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reversea(arr, 5);

    return 0;
}


// #include <iostream>
// using namespace std;

// void swappa(int arr[],int n){
//     for(int i=0;i<n;i+=2){
//         if(i+1<n){
//         int temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;}
//     }

// }
// void printswap(int arr[],int n){
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

// }


// int main (){
//     int arr[6]={1,23,42,2,77,678};

//     swappa(arr,6);
//     printswap(arr,6);

    

//     return 0;
// }