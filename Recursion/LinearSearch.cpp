#include<iostream>

using namespace std;

void print(int arr[], int size){
  cout<<"Size of array : "<<size<<endl;

  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
}

bool search(int arr[], int size, int key){
  print(arr, size);
  
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
  cout<<"Enter key to search : ";
  cin>>key;

  if(search(arr,size,key)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }
  return 0;
}