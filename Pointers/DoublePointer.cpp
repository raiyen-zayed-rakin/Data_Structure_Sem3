#include<iostream>

using namespace std;

int main(){

  int i = 5;
  int* p = &i;
  int** p2 = &p;

  //cout<<"ok";

  // cout<<p<<endl;
  // cout<<&p<<endl<<endl;

  // cout<<*p2<<endl;

  cout<<i<<endl;
  cout<<*p<<endl;
  cout<<**p2<<endl<<endl;;

  cout<<&i<<endl;
  cout<<p<<endl;
  cout<<*p2<<endl<<endl;

  cout<<&p<<endl;
  cout<<p2<<endl;
  return 0;
}