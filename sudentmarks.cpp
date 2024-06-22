#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int m1,m2,m3;

        void declareStudent(string name, int age, int m1, int m2, int m3) {
            this->name = name;
            this->age = age;
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }

        double calcAverage() {
            double avg = 0;
            return avg = (m1 + m2 + m3) / 3;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "m1: " << m1 << endl;
            cout << "m2: " << m2 << endl;
            cout << "m3: " << m3 << endl;
            cout << "Average: " << calcAverage() << endl;
            
        }
};

int main(){
    Student s1 = Student();

    string name;
    int age,m1,m2,m3;

    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter age: " << endl;
    cin >> age;
    cout << "Enter Score for Subject 1: " << endl;
    cin >> m1;
    cout << "Enter Score for Subject 2:  " << endl;
    cin >> m2;
    cout << "Enter Score for Subject 3: " << endl;
    cin >> m3;

    s1.declareStudent(name,age,m1,m2,m3);
    s1.displayInfo();

    return 0;

}