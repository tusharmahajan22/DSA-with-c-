#include <iostream>
using namespace std;


// int& func(int a){              ---------->>>>>>> never do this shit varna gand maar dungha 
//     int num=a;
//     int& ans= num;
//     return ans;
// }

void update(int& n){
    n++;
}

int main (){
    
    int i=5;
    i++;
    cout<<i<<endl;

    int& j=i;                 // reference variable created
    
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    update(i);
    cout<<i<<endl;
    return 0;
} 