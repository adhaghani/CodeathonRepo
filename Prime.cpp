#include <iostream>
#include <string>
using namespace std;



// DETERMINE IF PRIME OR NOT
int main(){

int cases,n;

cout<< "Enter number of cases : " ;
cin>> cases;
int size = cases;

int arr[size];  

cout << "Enter " << size << " Cases : ";
for(int i =0;i<size;i++){
    cin>>arr[i];
}

for(int i = 0;i<size;i++){
    int num = arr[i];
    bool isPrime = true;
    for (int j = 2;j<num;j++){
        if(num%j==0){
            isPrime = false;
        }
    }

    if(isPrime){    
        cout << "CASES #" << i + 1 << ": PRIME" << endl;
    }else{
        cout << "CASES #" << i + 1 << ": NOT PRIME" << endl;
    }
}


}