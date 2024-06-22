#include <iostream>
#include <string>
using namespace std;


void outputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void inputArray(int arr[], int n){
    cout << "Enter the elements: ";
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

}

void transformArray(int arr[],int n){ 

    int temparr[n];
    for(int i = 0; i < n; i++){
        int skipNum = arr[i];
        int product = 1;
        for(int j = 0; j< n; j++){
            if(arr[j] != skipNum){
               product *= arr[j];
            }
        }
        temparr[i] = product;
    }

    for(int i = 0 ;i < n;i++){
        arr[i] = temparr[i];
    }

    outputArray(arr,n);
}

int main(){
    
    int size;
    cout << "Enter the number of elements : ";
    cin >> size;

    int arr[size];

    inputArray(arr,size);
    transformArray(arr,size);


    return 0;
}