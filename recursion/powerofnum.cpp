#include<iostream>
#include <string>
using namespace std;

int power(int a,int n){
	if(n==0){
		return 1;

	}
	if(n==1){
		return a;
	}
	int ans=power(a,n/2);

	if(n%2==0){
		//if n is even
		return ans*ans;
		 
	}
	else{
		//if n is odd
		return a*ans*ans;
	} 
}

int main() {

	int a;
	int n;
	cin>>a>>n;
	int ans=power(a,n);
	cout<<ans;
    return 0;
}
