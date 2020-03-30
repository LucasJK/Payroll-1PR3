
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {

private:

	string name; // John Smith
	string dob; // "dd/mm/yyyy"
	string email; //johnsmith@company.ca
	int phone; //8675309
	string doh; // "dd/mm/yyyy"


public:

	Employee() { // default constructor
		name = "";
		dob = "";
		email = "";
		phone = 0;
		doh = "";
	}

	Employee(string n); // id and name constructor

	Employee(string n, string d, string e, int p, string h); // full constructor

	~Employee() { // destructor
		cout << "Deleted employee information" << endl;
	}

	// mutators
	void setName(string n);
	void setDateOB(string d);
	void setEmail(string e);
	void setPhone(int p);
	void setDateH(string h);

	// accessors
	string getName() const;
	string getDateOB() const;
	string getEmail() const;
	int getPhone() const;
	string getDateH() const;

	// print
	virtual void print();
};
#endif

