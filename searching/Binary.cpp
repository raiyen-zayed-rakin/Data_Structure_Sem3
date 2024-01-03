#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter size : ";
  cin>>n;

  int arr[n];

  cout<<"Enter elements for the sortted array : "<<endl;
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

  int first = 0;
  int last = n-1;
  int res = -1;

  while (first <= last) {
        int mid = (last + first) / 2;

        if (arr[mid] == value) {
            res = mid;  // Target found
            break;
        } 
        else if (arr[mid] < value) 
        {
            first = mid + 1;  // Search in the last half
        } 
        else 
        {
            last = mid - 1;  // Search in the left half
        }
  }

  if (res != -1) {
        cout << "Element found at index " << res << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

  return 0;
}