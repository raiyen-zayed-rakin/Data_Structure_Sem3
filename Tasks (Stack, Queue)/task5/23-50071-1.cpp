#include <iostream>
using namespace std;

void Swap(int arr[],int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void BubbleSort(int arr[], int size){
    int swapno = 0;
    int compare = 0;
    int swap = 0;
    int shift = 0;
    for(int i =0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j+1] < arr[j]){
                compare++;
                Swap(arr,j,j+1);
                swap+=3;
                swapno++;
            }
        }
        if(swapno == 0) break;
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"Total Comparisons : "<<compare<<endl;
    cout<<"Total Swapping : "<<swap/3<<endl;
    cout<<"Total Shifting : "<<shift/2<<endl;
    cout<<"Unit time for Bubble Sort : "<<compare + swap<<endl<<endl;
}

void SelectionSort(int arr[], int size){
    int compare = 0;
    int swap = 0;
    int shift = 0;
    for(int i=0;i<size-1;i++){
        int k = i;
        for(int j = i+1; j <size;j++){
            if(arr[j] < arr[k]){
              compare++;
              k = j;
            }
        }
        if(i != k){
           compare++;
           Swap(arr,i,k);
           swap+=3;
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"Total Comparisons : "<<compare<<endl;
    cout<<"Total Swapping : "<<swap/3<<endl;
    cout<<"Total Shifting : "<<shift/2<<endl;
    cout<<"Unit time for Selection Sort : "<<compare + swap + shift<<endl<<endl;

}

void InsertionSort(int arr[], int size){
    int i,v,j;
    int compare = 0;
    int swap = 0;
    int shift = 0;
    for(i=1;i<size;i++){
        v = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > v){
            arr[j+1] = arr[j];
            j--;
            compare++;
            shift+=2;
        }
        arr[j+1] = v;
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"Total Comparisons : "<<compare<<endl;
    cout<<"Total Swapping : "<<swap/3<<endl;
    cout<<"Total Shifting : "<<shift/2<<endl;
    cout<<"Unit time for Insertion Sort : "<<compare + swap + shift<<endl;

}


int main() {
    int arr[] = {10,8,2,7,35,13,5};
    int size = 7;
    cout<<"Bubble Sort : "<<endl;
    BubbleSort(arr,size);
    int arr2[] = {10,8,2,7,35,13,5};
    cout<<"Selection Sort : "<<endl;
    SelectionSort(arr2,size);
    int arr3[] = {10,8,2,7,35,13,5};
    cout<<"Insertion Sort : "<<endl;
    InsertionSort(arr3,size);
    cout<<endl<<endl;
    cout<<"So, therefore Selection Sort will be better than Insertion and bubble sort."<<endl;
    return 0;
}
