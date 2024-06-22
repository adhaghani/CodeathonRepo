#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    // how to reverse an array;

    int arr[5];

    // GET SIZE OF ARRAY
    int size = sizeof(arr)/sizeof(int);

    
    for (int i = 0; i < 5;i++){
        cin >> arr[i];
    }

    // PRINT ORIGINAL ARRAY

    for (int i = 0; i < 5;i++){
        cout << arr[i];
    }
    cout << "\n";

    // REVERSE FUCTION
    reverse(arr, arr+size);

    // PRINT RERVERSE ARRAY

    for (int i = 0; i < 5;i++){
        cout << arr[i];
    }
    




}