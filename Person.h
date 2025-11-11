#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    
    Person(string n = "", int i = 0) {
        name = n;
        id = i;
    }


    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

  
    void setName(string n) {
        name = n;
    }

    void setId(int i) {
        id = i;
    }

   
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

#endif










#endif
