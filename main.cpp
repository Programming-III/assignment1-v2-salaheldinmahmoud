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
    cout << "Instructor Information:" << endl;
    instructor1.display();

    cout << "\n-----------------------------------" << endl;
    cout << "Course Information:" << endl;
    course1.displayCourseInfo();

    cout << "-----------------------------------" << endl;

    return 0;
}







// ==================== Student Class Implementation ====================






















