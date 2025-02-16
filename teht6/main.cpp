#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main() {
    int selection = 0;
    vector<Student> studentList;

    do {
        cout << "\nSelect an option:" << endl;
        cout << "0 - Add students" << endl;
        cout << "1 - Print all students" << endl;
        cout << "2 - Sort and print students by Name" << endl;
        cout << "3 - Sort and print students by Age" << endl;
        cout << "4 - Find and print student by Name" << endl;
        cout << "5 - Exit" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        switch (selection) {
        case 0: {
            string name;
            int age;
            cout << "Enter student name: ";
            cin >> ws;
            getline(cin, name);
            cout << "Enter student age: ";
            cin >> age;
            studentList.push_back(Student(name, age));
            cout << "Student added!" << endl;
            break;
        }

        case 1: {
            cout << "Student List:\n";
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 2: {
            sort(studentList.begin(), studentList.end(),
                 [](Student& a,Student& b) {
                     return a.getName() < b.getName();
                 });
            cout << "Students sorted by name:\n";
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 3: {
            sort(studentList.begin(), studentList.end(),
                 [](Student& a,Student& b) {
                     return a.getAge() < b.getAge();
                 });
            cout << "Students sorted by age:\n";
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        }

        case 4: {
            string searchName;
            cout << "Enter student name to find: ";
            cin >> ws;
            getline(cin, searchName);

            auto it = find_if(studentList.begin(), studentList.end(),
            [&searchName](Student& s) {
            return s.getName() == searchName;
            });

            if (it != studentList.end()) {
                it->printStudentInfo();
            } else {
                cout << "Student not found." << endl;
            }
            break;
        }

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid selection, try again." << endl;
            break;
        }
    } while (selection != 5);

    return 0;
}
