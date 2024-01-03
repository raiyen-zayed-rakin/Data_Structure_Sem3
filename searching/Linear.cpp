#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter size : ";
  cin>>n;

  int arr[n];

  cout<<"Enter elements for the array : "<<endl;
  for (int i = 0; i < n; i++)
  {
    cout<<"arr["<<i<<"] : ";
    cin>>arr[i];
    cout<<endl;
  }
  cout<<endl;

  cout<<"Current array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;

  int value;
  cout<<"Enter element to search : ";
  cin>>value;

  for (int  i = 0; i < n; i++)
  {
    if(arr[i] == value){
      cout<<"Found in position "<<i+1<<endl;
      break;
    }
  }
  
  return 0;
}