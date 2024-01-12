#include<iostream>

using namespace std;

void print(int arr[], int start, int end){
  //cout<<"Size of array : "<<end<<endl;

  for (int i = start; i <= end; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

bool BinarySearch(int arr[], int start, int end, int key){
  //print(arr, start, end);
  //Base-not found
  if(start>end){
    return false;
  }
  
  int mid = start + (end - start)/2;

  //Base-Found
  if(arr[mid] == key){
    return true;
  }

  if(arr[mid] < key){
    return BinarySearch(arr,mid+1,end,key);
  }
  else{
    return BinarySearch(arr,start,mid-1,key);
  }
}

int main(){
  int size = 6;
  int arr[size] = {2,4,6,10,14,18};
  int key;
  cin>>key;

  int first = 0;
  int last = size-1;

  if(BinarySearch(arr, first, last,key)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }
  return 0;
}