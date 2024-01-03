#include<iostream>

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }  
};

Node* insertBST(Node* root, int val){
  if(root == NULL){
    return new Node(val);
  }
  
  if(val < root->data){
    root->left = insertBST(root->left, val);
  }
  else{
    //val > root->data
    root->right = insertBST(root->right, val);
  }

  return root;
}

void inorder(Node* root){
  if(root == NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

Node* searchBST(Node* root, int val){
  if(root->data == val){
    cout<<"found"<<endl;
    return root;
  }
  else if(root == NULL){
  cout<<"Value not found."<<endl;
  }
  if(val < root->data){
    root->left = searchBST(root->left, val);
  }
  else{
    root->right = searchBST(root->right, val);
  }
  return root;
}

int main(){
  Node* root = NULL;
  root = insertBST(root,5);
  insertBST(root,1);
  insertBST(root,3);
  insertBST(root,4);
  insertBST(root,2);
  insertBST(root,7);
  searchBST(root,4);
  // //print inorder;
  // inorder(root);
  return 0;
}