#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;



#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

int main() {
    
    Instructor instructor1("Dr. Lina Khaled", 101, "Computer Science", 5);


    Student s1("Omar Nabil", 2025, 2, "informatics");


    Course course1("CS101", "Introduction to Programming",3);


    course1.addStudent(s1);
  

   
    cout << "-----------------------------------" << endl;
    cout << "Course" << endl;
    #include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

int main() {
    // Create an instructor
    Instructor instructor1("Dr.Lina Khaled", 101, "Computer Science", 5);

    // Create some students
    Student s1("Salah", 2025, 2, "Computer Science");
    Student s2("Omar", 2026, 1, "Software Engineering");
    Student s3("Laila", 2027, 1, "Data Science");

    // Create a course
    Course course1("CS101", "Introduction to Programming", 3);

    // Add students to the course
    course1.addStudent(s1);
    course1.addStudent(s2);
    course1.addStudent(s3);

    // Display information
    cout << "-----------------------------------" << endl;
    cout << "Instructor Information:" << endl;
    instructor1.display();

    cout << "\n-----------------------------------" << endl;
    cout << "Course Information:" << endl;
    course1.displayCourseInfo();

    cout << "-----------------------------------" << endl;

    return 0;
}
.display();

    cout << "\n-----------------------------------" << endl;
    cout << "Course Information:" << endl;
    course1.displayCourseInfo();

    cout << "-----------------------------------" << endl;

    return 0;
}







// ==================== Student Class Implementation ====================






















