#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1,n2,n3;

    cout << "enter number 1 : ";
    cin >> n1;
    cout << "enter number 2 : ";
    cin >> n2;
    cout << "enter number 3 : ";
    cin >> n3;
    cout << "sum of three numbers : " << n1+n2+n3 << endl;
    
    float avg = ( n1 + n2 + n3 ) / 3;

    cout << "average of three numbers : " << avg << endl;

    return 0;

}