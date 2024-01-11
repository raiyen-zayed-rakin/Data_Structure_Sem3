#include<iostream>

using namespace std;


void update(int **p2){
  //p2 = p2 + 1; 
  //change - NO
  //*p2 = *p2 + 1;
  //change - yes
  //**p2 = **p2 + 1;
  //change - yes

}
int main(){

  int i = 5;
  int* p = &i;
  int** p2 = &p;

  //cout<<"ok";

  // cout<<p<<endl;
  // cout<<&p<<endl<<endl;

  // cout<<*p2<<endl;

  // cout<<i<<endl;
  // cout<<*p<<endl;
  // cout<<**p2<<endl<<endl;;

  // cout<<&i<<endl;
  // cout<<p<<endl;
  // cout<<*p2<<endl<<endl;

  // cout<<&p<<endl;
  // cout<<p2<<endl;

  cout<<i<<endl;
  cout<<p<<endl;
  cout<<p2<<endl<<endl;
  update(p2);
  cout<<i<<endl;
  cout<<p<<endl;
  cout<<p2<<endl;
  


  
  return 0;
}