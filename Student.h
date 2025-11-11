#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


class Student : public Person {
private:
    int yearLevel;
    string major;

public:
 
    Student(string n = "", int i = 0, int year = 1, string m = "")
        : Person(n, i) { 
        yearLevel = year;
        major = m;
    }

 
    int getYearLevel() const {
        return yearLevel;
    }

    string getMajor() const {
        return major;
    }

    
    void setYearLevel(int year) {
        yearLevel = year;
    }

    void setMajor(string m) {
        major = m;
    }


    void display() const {
       
        Person::display();

        
        cout << "Year Level: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};

#endif








