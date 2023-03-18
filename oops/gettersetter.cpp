#include <iostream>
using namespace std;

class house{

    private:
        int phonenum;
        char name;

    public:
        int houseno;


    int getphonenum(){
        return phonenum;
    }

    void setphonenum(int n){
        phonenum=n;
    }

};

int main(){

    house h1;
    h1.setphonenum(901);
    cout<<h1.getphonenum()<<endl;

    h1.houseno=69;
    cout<<h1.houseno<<endl;

    return 0;
}