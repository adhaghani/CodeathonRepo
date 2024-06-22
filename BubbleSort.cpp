#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




// PRINT FUNCTION
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

int arr[] = {5, 1, 4, 2, 8};

int arrSize = sizeof(arr) / sizeof(int);


// PRINT ORIGINAL
printArray(arr, arrSize);

// ROTATION
// Number to Transform TO THE RIGHT
int n = 2;
rotate(arr, arr + n, arr + arrSize);
printArray(arr, arrSize);

// Number to Transform TO THE LEFT
int n = 2;
rotate(arr, arr + arrSize - n, arr + arrSize);
printArray(arr, arrSize);

// ASCENDING
sort(arr, arr+arrSize);
printArray(arr, arrSize);
// DESCENDING
sort(arr, arr+arrSize, greater<int>());
printArray(arr, arrSize);


// Bubble sort
for(int i = 0; i < arrSize; i++){
    
}

return 0;
}