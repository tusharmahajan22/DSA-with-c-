
#include <iostream> 

using namespace std;

int main() {

    
    int arr[7] = { 2,3,999,6,3,6,2 };
    
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^arr[i];
    }
    cout<<ans;

    return 0;
}