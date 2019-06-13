/***************************************
Justin Pulido
Course.h
April 29, 2017
The course.h file grabs the courses the
students are in and prints them out. 
**************************************/
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Course
{
private:
    string course_name;
    Student * student_pointer;
public:
    Course();
    Course(string n, Student * student_p);
    string get_course_name();
    Student * get_student_pointer();
    void print(); 
};

#endif
