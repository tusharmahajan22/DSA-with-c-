#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n){

    int prime[100]={0};
    prime[0]=prime[1]=1;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                prime[j]=1;
            }
        }
    }

    for(int i=0;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main (){
    int n;
    cin>>n;

    SieveOfEratosthenes(n);


    return 0;
} 

//complexity --->>> O(n log(log n)) 