#include <iostream>
#include<stack>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=tail=NULL;
    }
    void Add(int x){
        if(head == NULL){  //first value will be treated as head
            Node* nn = new Node(); //memory allocation
            nn->data = x;
            head = nn;
            tail = nn;
        }
        else{
            Node* nn = new Node(); //memory allocation
            nn->data = x;
            tail->next = nn;
            tail = nn;
        }
    }
    void Search(int v){
        bool found = false;
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == v){
               found = true;
               break;
            }
            temp = temp->next;
        }
        cout << "Found: "<<found <<endl;
    }
    void Show(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" ";
            temp = temp->next;
        }
        cout << endl;
    }
    void Delete(int v){
        if(head->data == v){
            head = head->next;
            return;
        }
        
        Node* temp = head;
        Node* prev = head;

        while(temp != NULL){
            if(temp->data == v){
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList ll;
    ll.Add(10);
    ll.Add(20);
    ll.Add(30);
    ll.Add(45);
    ll.Show();
    ll.Delete(10);
    ll.Show();
    ll.Search(45);

    stack<char> ss;
    ss.top();
    return 0;
}

