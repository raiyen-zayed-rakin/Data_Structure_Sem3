#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter size : ";
  cin>>n;

  int arr[n];

  cout<<"Enter elements for the sortted array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
    cout<<endl;
  }
  cout<<endl;
  cout<<"Current sortted array : ";
  for(int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  int data;
  cout<<"Enter value for searching : ";
  cin>>data;

  int first = 0;
  int last = n-1;
  int res = -1;

  while (first <= last)
  {
    int mid = (first + last)/2;

    if(arr[mid] == data){
      res = mid;
      break;
    }
    else if(arr[mid] < data){
      first = mid - 1;
    }
    else{
      last = mid + 1;
    }
  }
  
  if (res != -1) {
        cout << "Element found at index " << res << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
  
  return 0;
}