#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node( int data){
        this->data= data;
        left=nullptr;
        right=nullptr;
    }

};

Node* createTree(){
    int data;
    cout<<"enter the data:"<<endl;
    cin>>data;

    if(data==-1){
        return nullptr;
    }
    Node* root = new Node(data);

    cout << "Enter data for left child of " << data << ": ";
    root->left = createTree();

    cout << "Enter data for right child of " << data << ": ";
    root->right = createTree();

    return root;
}
void printTree(Node* root){
    if (root == nullptr)
        return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = createTree();

    cout << "\nTree Traversal: ";
    printTree(root);

    return 0;
}