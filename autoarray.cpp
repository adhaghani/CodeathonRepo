#include <iostream>
#include <string>
using namespace std;

int main(){

int n1 = 0;

while(true){
cout << "enter a number for array size : " << endl;
cin >> n1;

if(n1 > 0){
    break;

}
else {
    cout << "invalid input" << endl;
}
}

const int arrsize = n1;

int arr[arrsize];
int sizearray = sizeof(arr) / sizeof(int);

for(int i = 0; i < sizearray; i++){
    arr[i] = 0;
    cout << arr[i] << " ";
}

}