#include<iostream>

using namespace std;

bool isSorted(int arr[], int size){
  //base case
  if(size == 1 || size == 0)
    return 1;
  if(arr[0] > arr[1]){
    return 0;
  }
  else{
    bool remainingPart = isSorted(arr+1, size-1);
    return remainingPart;
  }

  
}

int main(){
  int arr[6] = {2,41,6,9,11,13};

  if(isSorted(arr, 6)){
    cout<<"Array is sorted.";
  }
  else{
    cout<<"Array is not sorted.";
  }

  return 0;
}