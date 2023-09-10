//student.cpp - defions for the 'student' class
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

// BEGIN student.cpp
// pull in the c++ std string library
#include <string>
// pull in the 'student.h' file with the class declarations
#include "student.h"

// let the compiler know we are using the 'std' namespace, see 'student.h'
using namespace std;

// default constructor:
// instantiates the 'student' object and sets all values to default
student::student()
{
	this->id = 0;
	this->name = "";
	this->address = "";
	this->gpa = 0.0;
	this->dob = "";
}

// overloaded constructor:
// instantiates the 'student' object and sets all values to those provided
// performs basic check to make sure gpa parameter is within acceptable bounds
// TODO: notify of gpa OOB error
student::student(int id, string name, string address, float gpa, string dob)
{
	this->id = id;
	this->name = name;
	this->address = address;
	if (gpa >= 0.0 && gpa <= 4.0)
		this->gpa = gpa;
	else
		this->gpa = 0.0;
	this->dob = dob;
}

// setId(int id):
// sets student id to parameter provided
bool student::setId(int id)
{
	this->id = id;
	return true;
}

// setName(string name):
// sets student name to parameter provided
bool student::setName(string name)
{
	this->name = name;
	return true;
}

// setAddress(string address):
// sets student address to parameter provided
bool student::setAdress(string address)
{
	this->address = address;
	return true;
}

// setGpa(float gpa):
// sets student gpa to parameter provided after check gpa is within bounds
// TODO: notify of gpa OOB error
bool student::setGpa(float gpa)
{
	if (gpa >= 0.0 && gpa <= 4.0)
	{
		this->gpa = gpa;
		return true;
	}
	else
	{
		return false;
	}
}

// setDob(string dob):
// sets student dob to parameter provided
bool student::setDob(string dob)
{
	this->dob = dob;
	return true;
}

// getId():
// returns student id
int student::getId()
{
	return this->id;
}

// getName():
// returns student name
string student::getName()
{
	return this->name;
}

// getAddress():
// returns student address
string student::getAddress()
{
	return this->address;
}

// getGpa():
// returns student gpa
float student::getGpa()
{
	return this->gpa;
}

// getDob():
// returns student date of birth
string student::getDob()
{
	return this->dob;
}