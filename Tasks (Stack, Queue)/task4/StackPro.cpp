#include<iostream>

using namespace std;

struct Stack
{
    int top = 0;
        
    int size;
    
    // void getSize(int demo){
    //     size = demo;
    // }
    int arr[10];
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

};


int main(){

    return 0;
}