#include<iostream>

using namespace std;

int power(int a, int b){
  if(b == 0){
    return 1;
  }
  if(b == 1){
    return a;
  }
  a = a * power(a,b-1);
  
}

int main(){
  int a,b;
  cin>>a>>b;

  cout<<power(a,b);


  return 0;
}