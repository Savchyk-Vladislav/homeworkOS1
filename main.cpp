#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int age;
};

int main() {
    vector<Student> students;

    while (true) {
        cout << "Enter the student's name (or enter '/' to view the list): ";
        string input;
        cin >> input;

        if (input == "/") {
            if (students.empty()) {
                cout << "The list of students is empty." << endl;
            } else {
                cout << "List of students:" << endl;
                for (Student student : students) {
                    cout << " Name: " << student.firstName << endl << " Surname: " << student.lastName << endl << " Age: " << student.age << endl << "=========================================" << endl;
                }
            }
        } else {
            Student student;
            student.firstName = input;
            cout << "Enter the student's surname: ";
            cin >> student.lastName;
            cout << "Enter the student's age: ";
            cin >> student.age;

            students.push_back(student);

            cout << "Student added." << endl;
        }
    }

    return 0;
}

