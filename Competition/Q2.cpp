#include <iostream>
#include <string>
using namespace std;

struct Student {
    string Name;
    int age;
    float GPA;
};

int main(){
    Student student;

    // INPUT DATA
        getline(cin,student.Name);
        cin>> student.age;
        cin >> student.GPA;

    // OUTPUT
    cout << "Student Details: " << endl;
    cout << "Name: " << student.Name << endl;
    cout << "Age: " << student.age << endl;
    cout << "GPA: " << student.GPA << endl;
}
