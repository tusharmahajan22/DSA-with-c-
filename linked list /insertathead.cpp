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

void insertathead(node* &head, int d)
{

    node *temp = new node(d);

    temp->next = head;

    head=temp;
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
    print(head);

    insertathead(head,69);
    print(head);


    return 0;
}
