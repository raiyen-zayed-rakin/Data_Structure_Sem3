#include <bits/stdc++.h> 
using namespace std;

//CodeNinja/Studio 
//Count Ways To Reach The N-th Stairs
//Leetcode- 70
int countDistinctWays(int nStairs) {
    //base case 
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}

int main(){
  int n; 
  cin>>n;

  cout<<countDistinctWays(n);
  
}