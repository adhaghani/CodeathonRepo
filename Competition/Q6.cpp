#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    for (int i = 0;i<n;i++){
        int num = arr[i]; 
        bool unique = true;
        for(int j= 0; j < n;j++){
            if(j == i){
                continue;
            }

            if(arr[j] == num){
                unique = false;
                break;
            }
        }
        if(unique){
            cout << arr[i] << " ";
        }
    }
    return 0;
}