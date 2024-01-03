#include<iostream>
#include<vector>
using namespace std;

class Vector{
public:
int size;
int *arr;
int cap;

Vector(){
  size = 0;
  cap = 0;
  arr = NULL;
}
Vector(int n){
  size = n;
  arr = new int[size];
}
~Vector(){
  delete[] arr;
}

void add(int value){
  if(size == cap){
    resize();
  }
  arr[size] = value;
  size++;
}

void add(int value, int key, int direction){
      int index = findIndex(key);
        
        if (direction == 1){
            index = min(index + 1, size);
        }
        else{
            index = max(static_cast<int>(index) - 1, 0);
        }
        insertAtIndex(value, index);
}

void remove(int value){
  int index = findIndex(value);

  if(index != size){
    for (int i = index; i < size-1; ++i)
    {
      arr[i] = arr[i+1];
    }
    size--;
  }
}

int search(int key) {
  return findIndex(key);
}

int count(){
  return size;
}

  
void print(){
  for(size_t i = 0; i < size; ++i){
    cout << arr[i] << " ";
    }
    cout << endl;
}



private:

void resize(){
  if(cap == 0){
    cap = 1;
  }
  else{
    cap = cap * 2;
  }
  int *newArr = new int[cap];
  for (int i = 0; i < size; i++)
  {
    newArr[i] = arr[i];
  }
  delete[] arr;
  arr = newArr;
}

int findIndex(int value){
  for (int i = 0; i < size; ++i)
  {
    if(arr[i] = value){
      return i;
    }
  }
  return size;
}

void insertAtIndex(int value, int index) {
        if (size == cap) {
            resize();
        }
        for (size_t i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        size++;
    }

};


int main(){
  Vector myArray;
  myArray.add(10);
    myArray.add(20);
    myArray.add(30);
    myArray.add(40);
    myArray.print();  // Output: 10 20 30 40

    myArray.add(25, 20, 1);
    myArray.print();  // Output: 10 20 25 30 40

    myArray.add(35, 30, -1);
    myArray.print();  // Output: 10 20 25 30 35 40

    myArray.remove(25);
    myArray.print();  // Output: 10 20 30 35 40

    size_t index = myArray.search(30);
    if (index != myArray.count()) {
        std::cout << "Item found at index " << index << std::endl;  // Output: Item found at index 2
    } else {
        std::cout << "Item not found." << std::endl;
    }

    std::cout << "Total count: " << myArray.count() << std::endl;  // Output: Total count: 5
  return 0;
}