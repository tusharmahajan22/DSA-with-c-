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

void insertathead(node* &head, int data)
{

    node *temp = new node(data);

    temp->next = head;
    head = temp;
}

void insertattail(node* &tail,int data){

    node*temp=new node(data);
    tail->next=temp;
    tail=tail->next;  //tail=temp;

    
}

void deletenode(node* &head,int position){
    
}

void printll(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    node *node1 = new node(69);

    node *head = node1;
    node *tail = node1;
    printll(head);

    insertattail(tail, 9);
    printll(head);

    return 0;
}
