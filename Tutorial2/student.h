// student.h - declarations for the 'student' class
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

// BEGIN student.h
// #ifndef/#define pair to prevent errors about multiple definitions of header
#ifndef STUDENT_H
#define STUDENT_H

// pull in the c++ std string library
#include <string>

// all c++ std librarys belong to the 'std' namespace, so let the compiler know
// we are using that namespace. if we were creating new namespaces we would
// ommit this and then have to prepend all c++ std library function with std::
using namespace std;

// the meat and potatoes, as it were
// start the declaration of the student class
class student
{
	//unless otherwise specified by keywords, class members are private
	//declare the private vars described above
	int id;
	string name;
	string address;
	float gpa;
	string dob;

	// use the 'public' keyword to declare the functions as public, for accessing
	// class data from outside of the class
public:
	// declare the functions/methods described above
	student();
	student(int, string, string, float, string);
	bool setId(int);
	bool setName(string);
	bool setAdress(string);
	bool setGpa(float);
	bool setDob(string);
	int getId();
	string getName();
	string getAddress();
	float getGpa();
	string getDob();
};

// don't forget the #endif to close out the #ifndef/#define pair from the top!
#endif