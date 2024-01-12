#include<iostream>

using namespace std;

// static int s = 0;
// int sum(int arr[], int size){
  
//   if(size == 0){
//     return 0;
//   }
//   s+=arr[size-1];
//   sum(arr, size-1);
//   return s;
// }

int sum(int arr[], int size){
  
  if(size == 0){
    return 0;
  }
  if(size == 1){
    return arr[0];
  }
  int remaining = sum(arr+1, size-1);
  int sum = arr[0] + remaining;
  
  return sum;
}

int main(){
  int arr[5] = {2,4,9,9,9};

  cout<<"Sum is : "<<sum(arr, 5);
  return 0;
}