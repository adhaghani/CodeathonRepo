#include <iostream>
#include <string>
using namespace std;




int main(){

int cases,n;

// Input size of array
cin>> cases;
int size = cases;

int arr[size];  

// Enter data for array Data
for(int i =0;i<size;i++){
    cin>>arr[i];
}

// If prime, print Prime
for(int i = 0;i<size;i++){
    int num = arr[i];
    bool isPrime = true;
    for (int j = 2;j<num;j++){
        if(num%j==0){
            isPrime = false;
        }
    }
    if(num <= 1){
        isPrime = false;
    }

    if(isPrime){    
        cout << "TRUE" << endl;
    }else{
        cout << "FALSE" << endl;
    }
}


}