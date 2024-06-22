#include <iostream>
#include <string>
using namespace std;

struct Student {
    string Name;
    double score;
};

void inputData(Student stud[], int size){

    for(int i=0;i<size;i++){
        cout << "Enter name of student " << i+1 << ": ";
        getline(cin.ignore(),stud[i].Name);
        cout << "Enter score of student " << i+1 << ": ";
        cin >> stud[i].score;
    }
}

int inputSize(){
    int size;
    cout << "Enter the number of students: ";
    cin >> size;
    return size;
}

double calcAverage(Student stud[], int size){
    double average;
    for(int i = 0 ; i < size;i++){
        average += stud[i].score;
    }
    return average / size;
}

double getHighest(Student stud[], int size){
        double high = stud[0].score;

    for(int i = 1;i<size;i++){
        if(stud[i].score > high){
            high = stud[i].score;
        }
    }

    return high;
}
double getLowest(Student stud[], int size){
            double low = stud[0].score;

    for(int i = 1;i<size;i++){
        if(stud[i].score < low){
            low = stud[i].score;
        }
    }

    return low;
}




void outputData(Student stud[], int size){

    cout << "Student Details: " << endl;
    for(int i=0;i<size;i++){
    cout << "Name: " << stud[i].Name <<"," <<" Score: "<< stud[i].score << endl;
    }

    cout << "\nAverage score: " << calcAverage(stud,size) << endl;
     cout << "Highest score: " << getHighest(stud,size) <<endl;
    cout << "Lowest score: " << getLowest(stud,size) <<endl;


}


int main(){

    int size = inputSize();
    
    Student students[size];
    inputData(students,size);
    outputData(students,size);

    }
    

