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

  cout<<"Current unsorted array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;

  int swap;
  while(swap != 0){
    swap = 0;
    for (int i = 0; i < n-1; i++)
    {
      if(arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        swap++;
      }
    }

  }
  cout<<"New sortted array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
