//student.cpp - define class student

#include <string>
#include "student.h"

using namespace std;

student::student()
{
	this->id = 0;
	this->name = "";
	this->address = "";
	this->gpa = 0.0;
	this->dob = "";
}

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

bool student::setId(int id)
{
	this->id = id;
	return true;
}

bool student::setName(string name)
{
	this->name = name;
	return true;
}

bool student::setAdress(string address)
{
	this->address = address;
	return true;
}

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

bool student::setDob(string dob)
{
	this->dob = dob;
	return true;
}

int student::getId()
{
	return this->id;
}

string student::getName()
{
	return this->name;
}

string student::getAddress()
{
	return this->address;
}

float student::getGpa()
{
	return this->gpa;
}

string student::getDob()
{
	return this->dob;
}