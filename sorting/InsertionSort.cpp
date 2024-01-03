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

  cout<<"Current unsortted array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;

  
  int v;
  for(int i=1;i<n;i++){
      v = arr[i];
      int j = i-1;
      while(j>=0 && arr[j] > v){
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = v;
    }

  
  cout<<"New sortted array : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;

  return 0;
}
