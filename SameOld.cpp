#include <iostream>
#include <string>
using namespace std;

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

    int sum = 0;
    int temp = num;

    while(temp != 0){
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == num){
        cout << "CASES #" << i + 1 << ": SAME" << endl;
    }
    else{
        cout << "CASES #" << i + 1<< ": DIFFERENT" << endl;
    }
}



}