#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(){
    // DESCENDING ORDER
    string str = "hello";
    sort(str.begin(), str.end(), greater<char>());
    // OUTPUT ollhe
    cout << str << endl;

    sort(str.begin(), str.end(), greater<char>());
    cout << str << endl;

    int size;
    cin >>size;
    int arr[size];

    for(int i = 0; i< size;i++){
        arr[i] = i+1;
        cout << arr[i] << " ";
    }

    
}