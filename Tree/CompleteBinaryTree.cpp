#include<iostream>
#include<queue>

using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(){
    data = 0;
    left = right = NULL;
  }
  Node(int v){
    data = v;
    left = right = NULL;
  }
};

class CBT{
  public:
  Node* root;
  queue<Node*> q;

  CBT(){
    root = NULL;
  }
  void insert(int v){
    Node* nn = new Node(v);
    q.push(nn);
    
    if(root == NULL){
      root = nn;
      cout<<"Node value : "<<nn->data<<"inserted"<<endl;
    }
    else{
      Node* p = q.front();
      if(p->left){
        p->left = nn;
        cout<<"Node value : "<<nn->data<<"inserted"<<endl;
      }
      else{
        p->right = nn;
        cout<<"Node value : "<<nn->data<<"inserted"<<endl;
        q.pop();
      }
    }
  }

  void show(){
    queue<Node*> q;
    q.push(root);
    Node* p = new Node('9');
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
  }
};


int main(){
  CBT test;
  test.insert(1);         //  1
  test.insert(2);    
  test.insert(3);       //  2   3
  test.insert(4);
  test.insert(5);
  test.insert(6);
  test.insert(7); 
      //4   5   6   7

  test.show();
  return 0;
}
