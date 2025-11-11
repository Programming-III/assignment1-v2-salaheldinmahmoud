#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;    
    int currentStudents;

public:
    
    Course(string code, string name, int max) {
        courseCode = code;
        courseName = name;
        maxStudents = max;
        currentStudents = 0;
        students = new Student[maxStudents];
    }

 
    void addStudent(const Student& s) {
        if (currentStudents < maxStudents) {
            students[currentStudents] = s;
            currentStudents++;
        } else {
            cout << "Course is full, cannot add more students.\n";
        }
    }

    
    void displayCourseInfo() const {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Current Students: " << currentStudents << endl;
        cout << "-----------------------------------" << endl;

        for (int i = 0; i < currentStudents; i++) {
            cout << "Student " << i + 1 << ": ";
            students[i].display(); 
        }
    }

    
    ~Course() {
        delete[] students;
    }
};

#endif

















#endi
