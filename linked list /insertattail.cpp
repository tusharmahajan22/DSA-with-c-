#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertathead(node * &head, int d)
{

    node *temp = new node(d);

    temp->next = head;

    head=temp;
}

void insertattail(node* &tail,int d){
    node *temp = new node(d);

    tail->next=temp;
    tail= temp;

}

void print(node* &head){
    node* bro=head;

    while(bro != NULL){
        cout<<bro->data<<" ";
        bro=bro->next;
    }
    cout<<endl;
}

int main()
{

    node *node1= new node(10);
    node *head=node1;
    node *tail=node1;

    
    print(tail);



    insertattail(tail,69);
    print(head);


    return 0;
}
