/***********************************************
Justin Pulido
Course.cpp
April 30, 2017
will grab the course of the students and return
the name of the desired course someone wants to 
know. 
***********************************************/
#include "Course.h"
#include <string> 
#include <vector>
#include <iostream>

using namespace std;

Course::Course()
{
   course_name = "";
   student_pointer = 0;
}

Course::Course(string n, Student * student_p)
{
    course_name = n;
    student_pointer = student_p;
}
   
string Course::get_course_name()
{
    return course_name;
}
// getting the student name by relaying it
// back to the student.
Student * Course::get_student_pointer()
{
    return student_pointer;
}

void Course::print()
{
    cout << student_pointer << " " << course_name << endl;
}
