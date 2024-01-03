#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter size of arr1 : ";
    cin>>s;
    int arr1[s];
    cout<<"Enter elements of arr1 : "<<endl;
    for(int i = 0; i<s; i++){
        cin>>arr1[i];
    } 
    int res[s];
    

    int resSize = 0;

    bool unique = true;
    for (int i = 0; i < s; i++)
    {
        bool flag = false;
        for (int j = 0; j < resSize ; j++)
        {
            if(arr1[i] == res[j]){
                flag = true;
            }
        }
    if(!flag){
        res[resSize++] = arr1[i];
        
    }
    }
    if (resSize == s) {
        cout << "Array's already unique!" << endl;
    } else {
        for (int i = 0; i < resSize; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}