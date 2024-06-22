#include <iostream>
#include <string>
using namespace std;


int main(){
    int num;   
    int highNum;
    cout << "Enter a number (-1 to end)" << endl;
    while (num != -1){
    
        cin >> num;
        if (num == -1){
            break;
        }
        if(num > highNum){
            highNum = num;
        }

    }
    cout << "Highest Number input is : " << highNum;
    return 0;
}