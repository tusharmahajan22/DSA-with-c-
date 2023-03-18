//FIFO(first in first out)
#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    q.push(34);
    q.push(81);
    //11->34->81
    q.pop();
    cout<<q.front()<<endl;


}