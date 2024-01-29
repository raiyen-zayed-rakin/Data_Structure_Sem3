#include<iostream>

using namespace std;

void merge(int arr[], int start, int end){

  int mid = start + (end - start)/2;

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int *fir = new int[len1];
  int *sec = new int[len2];

  int mainArrayIndex = start;
  for (int i = 0; i < len1; i++)
  {
   fir[i] = arr[mainArrayIndex++];
  }
  
  
  mainArrayIndex = mid+1;
  for (int i = 0; i < len2; i++)
  {
   sec[i] = arr[mainArrayIndex++];
  }

  //merge 2 sorted array;
  int index1 = 0;
  int index2 = 0;
  mainArrayIndex = start;

  while(index1 < len1 && index2 < len2){
    if(fir[index1] < sec[index2]){
      arr[mainArrayIndex++] = fir[index1++];
    }
    else{
      arr[mainArrayIndex++] = sec[index2++];
    }
  }
  while(index1 < len1){ 
    arr[mainArrayIndex++] = fir[index1++];
  }

  while(index2 < len2){ 
    arr[mainArrayIndex++] = sec[index2++];
  }

  delete []fir;
  delete []sec;
}

void MergeSort(int arr[], int start, int end){
  if(start >= end){
    return; 
  }
  
  int mid = start + (end - start)/2;
  //left part
  MergeSort(arr,start,mid);
  //right part
  MergeSort(arr,mid+1,end);

  merge(arr, start, end);
}

int main(){
  
  int arr[5] = {2,5,1,6,9};
  int first = 0;
  int last = 6;

  MergeSort(arr, 0,4);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}