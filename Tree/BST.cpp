#include<iostream>
using namespace std;

class Node{
  public:
  int roll;
  int marks;
  Node* left;
  Node* right;

  Node(){

  }

  Node(int r, int m){
    roll = r;
    marks = m;
    left = right = NULL;
  }
};

class BST{
  Node* root;

  BST(){
    root = NULL;
  }

  Node* insertion(Node* root, int roll, int marks){
    if(root == NULL){
      Node* nn = new Node(roll, marks);
      root = nn; 
      return;
    }
    if(root->roll < roll){
      Node* nn = new Node(roll, marks);
      root->left = nn;
    }
    else{
      Node* nn = new Node(roll, marks);
      root->right = nn;
      
    }
  }

  void inserion(int roll, int marks){
    root = insertion(root, roll, marks);
  }
};


int main(){

  return 0;
}