/*************************************************
Justin Pulido
Main.cpp
April 30, 2017
grabs students from a file and reads them out by 
selecting students in certain classes.
PERCENT COMPLETED 100%
*************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Student.h"
#include "Course.h"

using namespace std;
//finding the students in the vector of students
//and returning them.
Student * find(string n, vector<Student *> Students)
{
    for (int i = 0; i < Students.size(); i++) {
	if (n == Students[i]->get_student())
	    return Students[i];
    }
}
int main()
{
    //declaring my vectors.
    vector<Student *> enrolled;
    vector<Course *> offered;

    string in_name, in_course; 
    double in_ID;

    ifstream in1, in2;
   
    //if the file cannot be found, close program.
    in1.open("Student");
    if (!in1.is_open()) {
	cout << "Error, could not open 'Persons'\n";
	return 1;
    }
  
    in1 >> in_name >> in_ID;
    while (!in1.eof()) {
	enrolled.push_back(new Student(in_name, in_ID));
	in1 >> in_name >> in_ID;
    }

    //if other file cannot be found, close program.
    in2.open("Courses");
    if (!in2.is_open()) {
	cout << "Error, could not open 'Courses'\n";
	return 2;
    }

   
    in2 >> in_name >> in_course;
    while (!in2.eof()) {
	Course * c = new Course(in_course, find(in_name, enrolled));
 	offered.push_back(c); //pushing back name in the course.
	in2 >> in_name >> in_course;
    }
    
    cout << "Please enter a course name: ";
    string temp;
    cin >> temp;
    int i;
   
    //searching for the name of the person in the course inputed.
    for (i = 0; i < offered.size(); i++) {
	if (temp == offered[i]->get_course_name()) {
	    Student * People = offered[i]->get_student_pointer();
	    cout << People->get_student() << endl;
	}
    }

    //cleaning up the new objects created. 
    for (i = 0; i < offered.size(); i++)
	delete offered[i];

    for (i = 0; i < enrolled.size(); i++) 
	delete enrolled[i];

    return 0;
}


