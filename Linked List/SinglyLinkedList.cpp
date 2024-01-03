#include<iostream>

using namespace std;

class Node{
  public:
  int value;
  Node* next;
  Node(){
    value = 0;
    next = NULL;
  }
};

class LinkedList{
  public:
  Node* head;
  Node* tail;
  LinkedList(){
    head = tail = NULL;
  }

  void add(int v){
    if(head == NULL){
      Node* nn = new Node();
      nn->value = v;
      cout<<"Value added : "<<v<<endl;
      head = tail = nn;
    }
    else{
      Node* nn = new Node();
      nn->value = v;
      cout<<"Value added : "<<v<<endl;
      tail->next = nn;
      tail = nn;
    }
  }

  void search(int v){
    if(head == NULL){
      cout<<"Empty Linked List"<<endl;
    }
    else{
      bool flag = false;
      Node* temp = head;
      int count = 0;
      while (temp != NULL)
      {
        if(temp->value == v){
          flag = true;
          count++;
          break;
        }
        else{
          temp = temp->next;
          count++;
        }
      }
      if(flag == true){
        cout<<"Value "<<v<<" found at Node No. : "<<count<<endl;
      }
      else{
        cout<<"Not found in the linked list."<<endl;
      }
    }
  }

  void Delete(int v){
    if(head->value == v){
            head = head->next;
            return;
    }

    Node* temp = head;
    Node* prev = head;

    while (temp != NULL)
    {
      if(temp->value == v){
        prev->next = temp->next;
        cout<<"Deleted value "<<v<<" successfully"<<endl;
        break;
      }
      else{
        prev = temp;
        temp = temp->next;
      }
    } 
  }

  void show(){
    Node* temp = head;
    while (temp != NULL)
    {
      cout<<temp->value<<" -> ";
      temp = temp->next;
    }
    cout<<endl;
  }
};




int main(){
  LinkedList ll;
  ll.add(2);
  ll.add(4);
  ll.add(5);

  ll.search(5);

  ll.Delete(5);
  ll.search(5);
  ll.show();
  return 0;
}