#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
    }
}
}

node* insertintobst(node* root,int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(data > root-> data){
        
        root->right=insertintobst(root->right,data);
    }
    else{
        root->left=insertintobst(root->left,data);
    }

    return root;
}


void insertdata(node* &root){
    int data;
    
    cin>>data;
    while(data!=-1){
        root=insertintobst(root,data);
        cin>>data;
        
    }
}

int main(){

    node* root=NULL;
    cout<<"Enter the data to create bst"<<endl;
    insertdata(root);
    cout<<"Printing the bst"<<endl;
    levelOrderTraversal(root);
    return 0;
}