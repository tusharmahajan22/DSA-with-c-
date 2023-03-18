#include <iostream>
#include <string>
using namespace std;

void saydigits(int num,string arr[]){

    if(num==0){
        return;
    }
    int i=num%10;
    num=num/10;
    string s=arr[i];
    
    saydigits(num,arr);
    cout<<s<<" ";
}

int main()
{

    int num;
    cin >> num;

    string arr[10] = {"zero", "one", "two", "three","four", "five", "six", "seven", "eight", "nine"};

    saydigits(num,arr);

    return 0;
}