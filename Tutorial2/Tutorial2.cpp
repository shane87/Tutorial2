// Tutorial2.cpp: the main file of the project, code execution begins in main()
//
// we will actually use the 'student' class here
// student class members:
//     private members:
//          id:      integer holding student ID
//          name:    string holding student name
//          address: string holding student address
//          gpa:     float holding student gpa, restricted to 0.0-4.0
//          dob:     string holding student date of birth
//     public members:
//          student(): constructor - overloaded
//          setId(): sets student id
//          setName(): sets student name
//          setAddress(): sets student address
//          setGpa(): sets student gpa
//          setDob(): sets student date of birth
//          getId(): returns student id
//          getName(): returns student name
//          getAddress(): returns student address
//          getGpa(): returns student gpa
//          getDob(): returns student date of birth

// BEGIN Tutorial2.cpp
// pull in the c++ std iostream library
#include <iostream>
// pull in the c++ sstream library
#include <sstream>
// pull in the 'student.h' file with class declarations
#include "student.h"

// let the compiler know we are using the 'std' namespace, see student.h
using namespace std;

// the bread and butter, as it were, of the program
// main():
// the primary function of our program, where everything begins!
// all c++ programs begin in main()
// it is possible to pass parameters to main() from the CLI, but that is an
// advanced topic for a later date
int main()
{
    // declare a few variables here to hold some info for us
    // start with a few 'student' pointers
    student* student1, *student2, *student3, *student4;
    // add an int for student ids
    int studentId;
    // add a few strings for name, address, dob, and primary input
    string studentName, studentAddress, studentDob, inStr;
    // add a float for gpa
    float studentGpa;

    // lets start with student1, and use the default constructor
    student1 = new student();
    // for student2, we will define the values
    student2 = new student
         (45875, "John Smith", "123 Anywhere Ln", 2.5, "01/01/2001");
    // for student3, we will also define values, but we will throw off the
    // the code with an OOB gpa
    student3 = new student
         (2187, "Jane Doe", "4875 Pruder Ln", 8.7, "08/08/2008");

    // for student4, we will let the user provide the values
    cout << "Please enter student4's id: ";
    getline(cin, inStr);
    stringstream(inStr) >> studentId;
    cout << "Please enter student4's name: ";
    getline(cin, studentName);
    cout << "Please enter student4's address: ";
    getline(cin, studentAddress);
    cout << "Please enter student4's gpa (between 0.0-4.0): ";
    getline(cin, inStr);
    stringstream(inStr) >> studentGpa;
    cout << "Please enter student4's date of birth: ";
    getline(cin, studentDob);

    // use the obtained values to instantiate student4
    student4 = new student(studentId, studentName, studentAddress, studentGpa, studentDob);

    // now lets use these objects! lets print our students
    cout << endl << "student1: " << endl;
    cout << "ID: " << student1->getId() << endl;
    cout << "Name: " << student1->getName() << endl;
    cout << "Address: " << student1->getAddress() << endl;
    cout << "GPA: " << student1->getGpa() << endl;
    cout << "DOB: " << student1->getDob() << endl;
    cout << endl << "student2: " << endl;
    cout << "ID: " << student2->getId() << endl;
    cout << "Name: " << student2->getName() << endl;
    cout << "Address: " << student2->getAddress() << endl;
    cout << "GPA: " << student2->getGpa() << endl;
    cout << "DOB: " << student2->getDob() << endl;
    cout << endl << "student3: " << endl;
    cout << "ID: " << student3->getId() << endl;
    cout << "Name: " << student3->getName() << endl;
    cout << "Address: " << student3->getAddress() << endl;
    cout << "GPA: " << student3->getGpa() << endl;
    cout << "DOB: " << student3->getDob() << endl;
    cout << endl << "student4: " << endl;
    cout << "ID: " << student4->getId() << endl;
    cout << "Name: " << student4->getName() << endl;
    cout << "Address: " << student4->getAddress() << endl;
    cout << "GPA: " << student4->getGpa() << endl;
    cout << "DOB: " << student4->getDob() << endl << endl;

    // hmm, thats odd. student1 had blank info
    // and student3 had a 0.0 gpa!
    // remeber, the default constructor provides default values
    // in this case, those are zero or empty values, but they are valid!
    // also remeber that we threw off the code on student3, assigning a gpa
    // that was OOB, so the code caught that and zeroed it. lets fix those
    // issues and then reprint

    // ask the user for student1's info
    cout << "Please enter student1's id: ";
    getline(cin, inStr);
    stringstream(inStr) >> studentId;
    cout << "Please enter student1's name: ";
    getline(cin, studentName);
    cout << "Please enter student1's address: ";
    getline(cin, studentAddress);
    cout << "Please enter student1's gpa (between 0.0-4.0): ";
    getline(cin, inStr);
    stringstream(inStr) >> studentGpa;
    cout << "Please enter student1's date of birth: ";
    getline(cin, studentDob);

    // and now lets assign those values to student1
    student1->setId(studentId);
    student1->setName(studentName);
    student1->setAdress(studentAddress);
    student1->setGpa(studentGpa);
    student1->setDob(studentDob);

    // finally, lets fix student3's gpa
    student3->setGpa(3.8);

    // now lets reprint and see if things don't look a little better!
    cout << endl << "student1: " << endl;
    cout << "ID: " << student1->getId() << endl;
    cout << "Name: " << student1->getName() << endl;
    cout << "Address: " << student1->getAddress() << endl;
    cout << "GPA: " << student1->getGpa() << endl;
    cout << "DOB: " << student1->getDob() << endl;
    cout << endl << "student2: " << endl;
    cout << "ID: " << student2->getId() << endl;
    cout << "Name: " << student2->getName() << endl;
    cout << "Address: " << student2->getAddress() << endl;
    cout << "GPA: " << student2->getGpa() << endl;
    cout << "DOB: " << student2->getDob() << endl;
    cout << endl << "student3: " << endl;
    cout << "ID: " << student3->getId() << endl;
    cout << "Name: " << student3->getName() << endl;
    cout << "Address: " << student3->getAddress() << endl;
    cout << "GPA: " << student3->getGpa() << endl;
    cout << "DOB: " << student3->getDob() << endl;
    cout << endl << "student4: " << endl;
    cout << "ID: " << student4->getId() << endl;
    cout << "Name: " << student4->getName() << endl;
    cout << "Address: " << student4->getAddress() << endl;
    cout << "GPA: " << student4->getGpa() << endl;
    cout << "DOB: " << student4->getDob() << endl << endl;

    // and that is a quick introduction to using classes!
    // always remember to return at the end of main()!!
    // no, it isn't required, but main() DOES declare a return type!
    return 0;
}
