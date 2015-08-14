// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
//#include <iostream>


#include "GradeBook.h" // include definition of class GradeBook

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string instname )
{
   setCourseName( name ); // call set function to initialize courseName
   setInstrutorName( instname );//exercício 3.11
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName()
{
   return courseName; // return object's courseName
} // end function getCourseName

void GradeBook::setInstrutorName( string instname ) //exercício 3.11
{
	instrutorName = instname;
}

string GradeBook::getInstrutorName() //exercício 3.11
{
	return instrutorName;
}

// display a welcome message to the GradeBook user
////void GradeBook::displayMessage()
// cout << "Welcome to the grade book for\n" << getCourseName() << "!\n\n"
  // 	<< getInstrutorName() << endl;
//} // end function displayMessage


/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/   
