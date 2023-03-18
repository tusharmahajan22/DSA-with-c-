#include<iostream>
#include <string>
using namespace std;
 
void subsequencess(string s,string newstring,int i){
	
	if(i==s.length()){
		cout<<newstring<<" ";
		return;
	}
	char c=s[i];
    //to be included
	subsequencess(s,newstring+c,i+1);
    //not to be included
	subsequencess(s,newstring,i+1);
}

int main() {

	string s="abc";
	string newstring;
	int index=0;

	subsequencess(s,newstring,index);
	

	
    return 0;
}
