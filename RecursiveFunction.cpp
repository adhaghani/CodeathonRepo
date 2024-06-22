#include <iostream>
#include <string>
using namespace std;


// GREATEST COMMON DIVIDER
// LEATS COMMON MULTIPLIER

// let say n = 10
// 10 + 9 + 8 + ... + (n = 0)

int addition(int value){
    if(value == 0) {
        return 0;
    }
    else {
         return value + (addition(value-1));
    }
}

// let say n = 10
// 10 - 9 - 8  - ... (n = 0)

int substraction(int value){
    if(value == 0){
        return 0;
    }
    else {
        return value - (substraction(value-1));
    }
}


int GCD(int a , int b){
    if(b != 0){
        return GCD(b, a % b);
    }
    else {
        return a;
    }
}

int LCM(int a, int b){
    return (a * b) / GCD(a,b);
}

int main(){

    int a = 4;
    int b = 5;

    cout << LCM(a,b);

}