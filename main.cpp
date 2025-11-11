#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;




int main() {
    
    Instructor instructor1("Dr. Lina Khaled", , "Computer Science", 5);


    Student s1("Omar Nabil", 2025, 2, "informatics");


    Course course1("CS101", "Introduction to Programming",3);


    course1.addStudent(s1);
  



int main() {
    // Create an instructor
    Instructor instructor1("Dr. Lina Khaled", , "Computer Science", 5);


    Student s1("Omar Nabil", 2025, 2, "informatics");


    Course course1("CS101", "Introduction to Programming",3);

    course1.addStudent(s1);
  

    cout << "-----------------------------------" << endl;
    cout << "Course : " << endl;
    instructo.display();

    cout << "\n-----------------------------------" << endl;
    cout << "Course Information:" << endl;
    course1.displayCourseInfo();

    cout << "-----------------------------------" << endl;
    cout<< "Student info: " << endl;
    s1.display();
    return 0;
}

}





























