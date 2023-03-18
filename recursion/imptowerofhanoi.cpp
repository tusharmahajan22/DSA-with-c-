#include<iostream>

using namespace std;

void powerofhanoi(int n,string s,string h,string d){
    if(n==1){
        cout<<"disc "<<n<<" transfered from "<<s<< " to "<<d<<endl;
        return ;
    }

    powerofhanoi(n-1,s,d,h);
    cout<<"transfer disk "<<n<<" from "<<s<<" to "<<d<<endl;
    powerofhanoi(n-1,h,s,d);
}

int main() {

	int n;
    cin>>n;
    
    powerofhanoi(n,"source","helper","destination");
    return 0;
}

