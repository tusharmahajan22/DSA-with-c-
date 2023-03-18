#include <iostream>
#include <vector>
using namespace std;

// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }

int main (){
    
    vector<int> v;
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity --> "<<v.capacity()<<endl;          
    cout<<"size ------> "<<v.size()<<endl;
    

    return 0;
} 