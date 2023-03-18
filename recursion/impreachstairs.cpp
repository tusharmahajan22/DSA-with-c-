#include<iostream>
#include <string>
using namespace std;

int stairs(int nstairs){
	if(nstairs<0){
		return 0;
	}
	if(nstairs==1){
		return 1;
	}
	int p=stairs(nstairs-1)+stairs(nstairs-2);
	return p;

}

int countWays(int nstairs)
{
    return stairs(nstairs + 1);
}


int main() {

	int nstairs;
	cin>>nstairs;
	int ans=countWays(nstairs);
	cout<<ans;
	
	
    return 0;
}