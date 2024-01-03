#include<iostream>

using namespace std;

class Node{
  public:
  int value;
  Node* next;
  Node* prev;
  Node(){
    value = 0;
    next = prev = NULL;
  }
};

class DLinkedList{
  public:
  Node* head;
  Node* tail;
  DLinkedList(){
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
      nn->prev = tail;
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
    if(head == NULL){
      cout<<"Linked List is empty. nothing to delete."<<endl;
      return;
    }
    if(head->value == v){
            head = head->next;
            return;
    }

    Node* temp = head;
    Node* prev2 = head;

    while (temp != NULL)
    {
      if(temp->value == v){
        prev2->next = temp->next;
        temp->next->prev = temp->prev;
        cout<<"Deleted value "<<v<<" successfully"<<endl;
        break;
      }
      else{
        prev2 = temp;
        temp = temp->next;
      }
    } 
  }

  void Forwardshow(){
    Node* temp = head;
    while (temp != NULL)
    {
      cout<<temp->value<<" -> ";
      temp = temp->next;
    }
    cout<<endl;
  }

  void Backwardshow(){
    Node* temp = tail;
    while (temp != NULL)
    {
      cout<<temp->value<<" -> ";
      temp = temp->prev;
    }
    cout<<endl;
  }
};




int main(){
  DLinkedList ll;
  ll.add(2);
  ll.add(4);
  ll.add(5);
  ll.add(6);
  ll.add(7);
  ll.add(9);

  ll.search(5);

  
  ll.Forwardshow();
  ll.Backwardshow();
  ll.Delete(6);
  ll.Forwardshow();
  ll.Backwardshow();
  return 0;
}