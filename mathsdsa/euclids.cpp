// gcd(a,b) == gcd(a-b,b) === gcd(a%b,b)


#include <iostream>
using namespace std;
int gcd(int a,int b){

    if (a==0){
        return b;
    }

    if (b==0){
        return a;
    }

    while(a!=b){

        if(a>b){
            a=a-b;
        }

        else if(a<b){
            b=b-a;
        }

        
    }
    return a;
}


int main (){
    int a,b;

    cin>>a;
    cin>>b;

    int ans= gcd(a,b);

    cout<<"the greatest common dividsor of a and b is: "<<ans;
    

    return 0;
} 

