/*portray inheritance define  a base class studnet to store roll number name, derive class result to store marks for three subjects and calculate the total and percentage*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin>>name;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    float marks[3];
    float total;
    float percentage;

public:
    void inputMarks() {
        total = 0;
        cout << "Enter marks for 3 subjects: " << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        percentage = (total / 300) * 100 ; 
    }

    void displayResult() {
        cout << "Marks for 3 subjects: ";
        for (int i = 0; i < 3; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    cout << "Enter Student Details:" << endl;
    student.inputDetails();

    cout << "Enter Student Marks:" << endl;
    student.inputMarks();

    cout << "Student Result:" << endl;
    student.displayDetails();
    student.displayResult();

    return 0;
}