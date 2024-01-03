#include<iostream>

using namespace std;

class Stack{
    int top;
    int *arr;
    int size;
    public:

    Stack(int demo){
        size = demo;
        arr = new int[size];
        top = 0;
    }
    void push(int value){
        if(!isFull()){
        arr[top] = value;
        top++;
        cout<<"pushed"<<endl;
        }
    }
    void pop(){
        if(!isEmpty()){
        top--;
        }
    } 
    void topindex(){
        cout<<"Top index : "<<top-1<<endl;
    }
    bool isFull(){
        if(top == size){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(top == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void topelement(){
        cout<<arr[top-1]<<endl;
    }

    void showStack(){
        int temp = top;
        for (int i = 0; i < top; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }

    ~Stack(){
        delete [] arr;
    }



};


int main()
{
     Stack s(5);
    // s.push(1);
    // s.topelement();
    // s.push(2);
    // s.topelement();
    // s.pop();
    // s.topelement();
    // s.push(3);
    // s.topelement();
    // s.push(4);
    // s.topelement();
    // s.push(5);
    // s.topelement();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    return 0;
}