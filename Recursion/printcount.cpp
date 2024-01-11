#include<iostream>

using namespace std;

// int print(int n){
//   //base
//   if(n == 0){
//     return 1;
//   }
//   cout<<n<<" ";
//   return print(n-1);
// }

void print(int n){
  if(n == 0){
    return;
  }
  print(n-1);
  cout<<n<<" ";
}
int main(){

  int n;
  cin>>n;

  print(n);

  return 0;
}
