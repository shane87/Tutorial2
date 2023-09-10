#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class student
{
	int id;
	string name;
	string address;
	float gpa;
	string dob;

public:
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
#endif