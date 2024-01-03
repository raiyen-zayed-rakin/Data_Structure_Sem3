#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
      data = value;
      left = right = NULL;
    }

    Node(){
      //empty constructor
    }
};

class BST{
public:
    Node* root;
    
    BST(){
      root = NULL;
    }

    Node* insertion(Node* root, int value) {
        if (root == NULL) {
          Node* nn = new Node(value);
          root = nn;
        }

        if (value < root->data) {
            root->left = insertion(root->left, value);
        } 
        else if (value > root->data) {
            root->right = insertion(root->right, value);
        }
        return root;
    }

  
    bool search(Node* root, int value){
        if (root == NULL){
            return false;
        }

        if (value == root->data){
            return true;
        } 
        else if (root->data > value){
            return search(root->left, value);
        } 
        else{
            return search(root->right, value);
        }
    }

    void traversal(Node* root){
        if (root != NULL) {
            traversal(root->left);
            cout << root->data << " ";
            traversal(root->right);
        }
    }

    void insertion(int value) {
        root = insertion(root, value);
        cout<<"Value "<<value<<" inserted."<<endl;
    }

    bool search(int value){
        return search(root, value);
    }

    void traversal(){
        traversal(root);
        cout<<endl;
    }
};

int main() {
    BST binarySearchTree;

    // Insert some values into the BST
    binarySearchTree.insertion(50);
    binarySearchTree.insertion(30);
    binarySearchTree.insertion(70);
    binarySearchTree.insertion(20);
    binarySearchTree.insertion(40);
    binarySearchTree.insertion(60);
    binarySearchTree.insertion(80);
    cout<<endl<<endl;

    cout<<"In-order traversal: ";
    binarySearchTree.traversal();
    cout<<endl<<endl;

    int searchValue;
    cout<<"Enter value to search in the BST :- ";
    cin>>searchValue; 
    if (binarySearchTree.search(searchValue)){
        cout << searchValue << " is found in the BST."<<endl;
    }
    else{
        cout << searchValue << " is not found in the BST."<<endl;
    }
    
    return 0;
}
