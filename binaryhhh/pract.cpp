#include <iostream>
using namespace std;
bool binarysearch(char arr[])
{
    int n=5;
    int start=0;
    int end =n-1;

    while(start<end){
        if(arr[start++]!=arr[end--]){
            return 0;
        }
        
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    return 1;

}

int main()
{
   char a[5];
   cin>>a;

   
   if(binarysearch(a)){
    cout<<"yeh boi";
   }
   else{
    cout<<"no boi";
   }
   

    return 0;
}