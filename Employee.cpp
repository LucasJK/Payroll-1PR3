#include "Employee.h"

#include <iostream>
using namespace std;

Employee::Employee(string n) {
	setName(n);
}

Employee::Employee(string n, string d, string e, int p, string h) {
	setName(n);
	setDateOB(d);
	setEmail(e);
	setPhone(p);
	setDateH(h);
}

// mutators
void Employee::setName(string n) { name = n; }
void Employee::setDateOB(string d) { dob = d; }
void Employee::setEmail(string e) { email = e; }
void Employee::setPhone(int p) { phone = p; }
void Employee::setDateH(string h) { doh = h; }

// accessors
string Employee::getName() const { return name; }
string Employee::getDateOB() const { return dob; }
string Employee::getEmail() const { return email; }
int Employee::getPhone() const { return phone; }
string Employee::getDateH() const { return doh; }

// print
void Employee::print() {
	cout << endl;
	cout << "Name: " << getName() << endl;
	cout << "Email Address: " << getEmail() << endl;
	cout << "Phone Number: " << getPhone() << endl;
	cout << "Date of Birth: " << getDateOB() << endl;
	cout << "Date Hired: " << getDateH() << endl;
}
