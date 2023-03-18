#include<iostream>
#include <string>
using namespace std;
 
void keypad(string s,string mapping,int index,string combination){
	if(index==s.size()){
		cout<<combination;
		return;
	}

	char currchar=s[index];
	
	string value=mapping[currchar-'0'];
	for(int i=0;i<value.length();i++){
		keypad(s,mapping,index+1,combination+value);
	}
}

int main() {

	string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
	string s="23";
	
	string combination;
	int index=0;
	keypad(s,mapping,index,combination);
	

	
    return 0;
}
