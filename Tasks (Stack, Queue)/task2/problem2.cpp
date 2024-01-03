// #include<iostream>

// using namespace std;

// int main(){
//     int s1,s2;
//     cout<<"Enter size of arr1 : ";
//     cin>>s1;
//     int arr1[s1];
//     cout<<"Enter elements of arr1 : "<<endl;
//     for(int i = 0; i<s1; i++){
//         cin>>arr1[i];
//     } 
//     cout<<"Enter size of arr2 : ";
//     cin>>s2;
//     int arr2[s2];
//     cout<<"Enter elements of arr2 : "<<endl;
//     for(int i = 0; i<s2; i++){
//         cin>>arr2[i];
//     } 
    
//     for (int i = 0; i < s1; i++)
//     {
//         for (int j = 0; j < s2; j++)
//         {
//             /* code */
//         }
        
//     }
    


//     return 0;
// }
#include <iostream>

int main() {
    int A[] = {1, 4, 2, 3, 6,9};
    int B[] = {5, 3, 7, 1, 2,6};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    int maxSize = (sizeA > sizeB) ? sizeA : sizeB; // Determine the maximum size

    int commonElements[maxSize]; // Create an array to store common elements
    int commonCount = 0; // Counter for common elements

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                commonElements[commonCount++] = A[i];
                break; // Break once a common element is found to avoid duplicates
            }
        }
    }

    if (commonCount > 0) {
        std::cout << "Common elements: ";
        for (int i = 0; i < commonCount; i++) {
            std::cout << commonElements[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No common element!" << std::endl;
    }

    return 0;
}
