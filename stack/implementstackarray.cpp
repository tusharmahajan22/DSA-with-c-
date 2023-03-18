#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void pushelement(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }

    void popelement(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            top--;
        }
    }

    void peek(){
        if(top>=0){
        cout<<arr[top]<<endl;}
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

   bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
   } 
};

int main(){
    
    stack st(5);
    st.pushelement(99);
    st.pushelement(67);
    st.pushelement(12);
    st.pushelement(82);
    st.pushelement(100);
    
    st.peek();

    return 0;
}
