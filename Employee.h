
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

#include "Payroll.h"
#include "Efficiency.h"
#include "Pay.h"

using namespace std;

class Employee : public Payroll, Efficiency, Pay {

private:

	int idNumber; // 6 random digits
	string name; // John Smith
	string pos; // General Manager
	string dob; // "dd/mm/yyyy"
	string email; //johnsmith@company.ca
	int phone; //8675309
	string doh; // "dd/mm/yyyy"


public:

	Employee() { // default constructor
		idNumber = 999999;
		name = "";
		pos = "";
		dob = "";
		email = "";
		phone = 0000000000;
		doh = "";
	}

	Employee(string na, string po); // basic constructor

	Employee(string na, string po, string da, string em, int ph, string hi); // full constructor

	~Employee() { // destructor
		cout << "Deleted employee information" << endl;
	}

	// ID Number Generator
	int generateId();
	// Checks ID Uniqueness
	//bool isUniqueId(int id);

	// mutators
	void setId();
	void setName(string na);
	void setPos(string po);
	void setDateOB(string da);
	void setEmail(string em);
	void setPhone(int ph);
	void setDateH(string hi);

	// accessors
	string getId() const;
	string getName() const;
	string getPos() const;
	string getDateOB() const;
	string getEmail() const;
	int getPhone() const;
	string getDateH() const;

	// print
	virtual void print();
};
#endif

