

#include <iostream>
using namespace std;

int main(){

    int n=4;
    
    
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=2;l<=i;l++){
            
            cout<<a--;
        }
        cout<<endl;
    }

    return 0;
}