#include <iostream>
 
using namespace std;

class Node{

public:

    int data;

    Node* next;

    Node* prev;

    Node(){

        data = 0;

        next = NULL;

        prev = NULL;

    }

};
 
class DoublyLinkedList{

public:

    Node* head;

    Node* tail;

    DoublyLinkedList(){

        head = NULL;

        tail = NULL;

    }

    void Add(int x){

        if(head == NULL){

            Node* nn = new Node();

            nn->data = x;

            head =tail =nn;

        }
        else{

            Node* nn = new Node();

            nn->data = x;

            tail->next = nn;

            nn->prev = tail;

            tail = nn;

        }

    }

    void FTraverse(){

        Node* temp = head;

        while(temp != NULL){

            cout << temp->data << " ";

            temp = temp->next;

        }

        cout <<endl;

    }

    void BTraverse(){

        Node* temp = tail;

        while(temp != NULL){

            cout<<temp->data<<" ";

            temp = temp->prev;

        }

        cout <<endl;

    }

};
 
int main()

{

    DoublyLinkedList dl;

    dl.Add(12);

    dl.Add(13);

    dl.Add(14);

    dl.Add(15);

    dl.Add(16);

    dl.FTraverse();

    dl.BTraverse();

 
    return 0;

}

// deletion method 
// stack by LL
// 
