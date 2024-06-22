#include <iostream>
#include <string>


class Student {
public:
    std::string name;
    int age;

    // constructor
    void declareStudent(std::string name, int age) {
        this->name = name;
        this->age = age;    
    }


    // getters
    std::string getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }

    // display
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};


int main() {
    Student student1;

    student1.declareStudent("John", 20);

    student1.displayInfo();
    

    return 0;
}