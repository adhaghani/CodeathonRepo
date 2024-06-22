#include <iostream>
#include <string>
using namespace std;

struct Student {
    string fullName;
    string icNumber;
    int studentNumber;
    double CGPA;
    string courseCode[5];
};

int main(){
    Student students[3];
    int studentsSize = sizeof(students) / sizeof(Student);

    // INPUT DATA

    for(int i=0;i<studentsSize;i++){
        cout << "---------------------" << endl;
        cout << "Full name : ";
        getline(cin.ignore(),students[i].fullName);
        cout << "ic Number : ";
        getline(cin.ignore(), students[i].icNumber);
        cout << "CGPA : ";
        cin.ignore() >> students[i].CGPA;
        int courseSize = sizeof(students[i].courseCode) / sizeof(string);
        for(int j = 0;j<courseSize;j++){
            cout << "Course #" << j+1 << " : ";
            cin.ignore() >> students[i].courseCode[j];
        }
    }


    

    // OUTPUT DATA

        for(int i=0;i<studentsSize;i++){
        cout << "---------------------" << endl;
        cout << "Full name : " << students[i].fullName << endl;
        cout << "ic Number : " << students[i].icNumber << endl;
        cout << "CGPA      : " << students[i].CGPA << endl;
        int courseSize = sizeof(students[i].courseCode) / sizeof(string);
        for(int j = 0;j<courseSize;j++){
        cout << "Course #" << j+1 << " : " << students[i].courseCode[j] << endl;
        }
    }
    
}
