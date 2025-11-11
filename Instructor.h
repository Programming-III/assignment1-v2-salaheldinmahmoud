#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
  
    Instructor(string name, int age, string dept, int years)
        : Person(name, age) {  
        department = dept;
        experienceYears = years;
    }

    
    void display() const {
        cout << "Instructor Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Department: " << department << endl;
        cout << "Years of Experience: " << experienceYears << endl;
    }
};

#endif
