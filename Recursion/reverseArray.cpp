// #include<iostream>

// using namespace std;

// void reverse(string& s,int i, int j){
//   if(i > j){
//     //cout<<s;
//     return; 
//   }
//   swap(s[i], s[j]);

//   reverse(s,i+1,j-1);
// }
// string DecimalToBinary(int num) 
// { 
//     string str; 
//       if(num%2 != 0){
//         while(num){ 
//       if(num & 1) // 1 
//         str+='1'; 
//       else // 0 
//         str+='0'; 
//       num>>=1; // Right Shift by 1   
//       }     
//       return str;
//       } 
//       else{
//         while(num){ 
//       if(num & 1) // 1 
//         str+='0'; 
//       else // 0 
//         str+='1'; 
//       num>>=1; // Right Shift by 1   
//       }     
//       return str;
//       }
// } 
// int main(){
//   // string a = "rakin"; 
//   // //cin>>a;

//   // reverse(a, 0, a.length()-1);

//   // cout<<a<<endl;
//   cout<<DecimalToBinary(10);
//   return 0;
// }

#include <bits/stdc++.h> 
using namespace std;
bool solve(string& s,int i, int j){
  if(i > j){
    return true;
  }
  if(s[i] != s[j]){
    return false; 
  }
  else{
    return solve(s,i+1,j-1);
  }
}
string DecimalToBinary(int num) 
{ 
    string str; 
      if(num%2 != 0){
        while(num){ 
      if(num & 1) // 1 
        str+='1'; 
      else // 0 
        str+='0'; 
      num>>=1; // Right Shift by 1   
      }     
      return str;
      } 
      else if(num%2 == 0){
        while(num){ 
      if(num & 1) // 1 
        str+='0'; 
      else // 0 
        str+='1'; 
      num>>=1; // Right Shift by 1   
      }     
      return str;
      }
} 
bool checkPalindrome(long long N)
{
  string n = DecimalToBinary(N);
  return solve(n, 0, n.length()-1);
}

int main(){
  cout<<checkPalindrome(10);
}