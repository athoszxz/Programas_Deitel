// Fig. 3.13: fig03_13.cpp
// GradeBook class demonstration after separating 
// its interface from its implementation.
#include <iostream>
using std::cout; 
using std::endl;

#include <string> // class GradeBook uses C++ standard string class
using std::string;

#include "GradeBook.h" // include definition of class GradeBook

// function main begins program execution
int main()
{
   // create two GradeBook objects
   GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
   GradeBook gradeBook2( "CS102 Data Structures in C++" );
   GradeBook gradeBook3( "Athos Balmant");

   // display initial value of courseName for each GradeBook
   cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
      << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() 
      << "\n This course is presented by: " << gradeBook3.getInstrutorName()
	  << endl;
   return 0; // indicate successful termination
} // end main

