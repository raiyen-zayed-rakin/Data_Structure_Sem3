#include<iostream>

using namespace std;

bool checkprime(int n){
    bool flag = false;
    for(int i = 2; i<n/2; i++){
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if(flag){
        return false;
    }
    else{
        return true;
    }

}

int main(){

   int num;
   cout<<"Enter a number to get factorial : ";
   cin>>num;
    int fact=1;

    if(checkprime(num) && num>0)
    {
        for (int i = 1; i <= num; i++)
        {
            fact*=i;
        }
        cout<<"Resulted factorial : "<<fact<<endl;
    }
    else
    {
        cout<<"ERROR! Not a prime number."<<endl;
    }



   return 0;
}
