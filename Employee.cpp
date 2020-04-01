#include "Employee.h"

#include <iostream>
using namespace std;

Employee::Employee(string na, string po) {
	setId();
	setName(na);
	setPos(po);
}

Employee::Employee(string na, string po, string da, string em, int ph, string hi) {
	setId();
	setName(na);
	setPos(po);
	setDateOB(da);
	setEmail(em);
	setPhone(ph);
	setDateH(hi);
}

// ID Number Generator
int Employee::generateId() {
	srand(time(NULL));
	int id = rand() % 900000 + 100000; // number between 100000 and 999999
	return id
}

/* // Checks ID Uniqueness
bool Employee::isUniqueId(int id) {
	// loop through employees' IDs
	// return true if unique
} */

// mutators
void Employee::setId() { 
	id = generateId();
	cout << "ID Generated: " << id << endl;
	/*while (!isUniqueId(id)) {
		id++
	}
	cout << "New ID Generated: " << id << endl;*/
	idNumber = id;
}
void Employee::setName(string na) { name = na; }
void Employee::setPos(string po) { pos = po; }
void Employee::setDateOB(string da) { dob = da; }
void Employee::setEmail(string em) { email = em; }
void Employee::setPhone(int ph) { phone = ph; }
void Employee::setDateH(string hi) { doh = hi; }

// accessors
string Employee::getId() const { return idNumber; }
string Employee::getName() const { return name; }
string Employee::getPos() const { return pos; }
string Employee::getDateOB() const { return dob; }
string Employee::getEmail() const { return email; }
int Employee::getPhone() const { return phone; }
string Employee::getDateH() const { return doh; }

// print
void Employee::print() {
	cout << endl;
	// ID
	cout << "Name: " << getName() << endl;
	// position
	cout << "Email Address: " << getEmail() << endl;
	cout << "Phone Number: " << getPhone() << endl;
	cout << "Date of Birth: " << getDateOB() << endl;
	cout << "Date Hired: " << getDateH() << endl;
}
