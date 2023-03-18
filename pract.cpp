#include<iostream>
#include <string>
using namespace std;

int fib(int n,vector<int> &dp){
	if(n<=1){
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int dp[n]=fib(n-1)+fib(n-2);
	return dp[n];
	
}

 

int main() {

	int n;
	cin>>n;
	vector<int> dp[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	int ans=fib(6,dp);
	
	cout<<ans;
	
	
	
    return 0;
}

