#include <iostream>
#include <stack> 
using namespace std;

int main(){
    
    string str="tushar";
    stack<char> s;

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    for(int i=0;i<str.length();i++){
        char ch=s.top();
        cout<<ch<<" ";
        s.pop();
        
    }


    

    return 0;
}
