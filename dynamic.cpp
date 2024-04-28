#include <iostream>
using namespace std;
int main() {
    // Dynamically allocate memory for a single integer
    int* singleVar = new int; 

    *singleVar = 10;
    cout << "Single Variable: " << *singleVar << std::endl;

    // Deallocate memory for the single integer
    delete singleVar;

    // Dynamically allocate memory for an array of integers
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arrayVar = new int[size]; 

    
    for (int i = 0; i < size; ++i) {
        arrayVar[i] = i * 2;
    }
    
    cout << "Array Variable: ";
    for (int i = 0; i < size; ++i) {
        cout << arrayVar[i] << " ";
    }
    cout <<endl;

    // Deallocate memory for the array
    delete[] arrayVar;

    return 0;
}

