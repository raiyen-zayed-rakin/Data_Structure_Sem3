#include<iostream>

using namespace std;

bool search(int arr[], int size, int key){
  if(size == 0){
    return false;
  }
  if(arr[0] == key){
    return true;
  }
  else{
    return search(arr+1,size-1,key);
  }
}

int main(){
  int size = 5;
  int arr[size] = {3,5,1,2,6};
  int key;
  cin>>key;

  if(search(arr,size,key)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }
  return 0;
}