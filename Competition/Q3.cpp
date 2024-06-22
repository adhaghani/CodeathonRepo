#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;

    int square[n][n];

    int primaryDia = 0, secondaryDia = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0; j < n;j++){
            cin >> square[i][j];
        }
    }


    for(int i = 0;i < n ; i++){
        primaryDia += square[i][i];
        secondaryDia += square[n-1-i][n-1-i];
    }

    cout << primaryDia << " " << secondaryDia;

    
    return 0;
}