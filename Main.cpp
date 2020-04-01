//Matthew Fernandes, Lucas Kupiec 
//400237897, 400068179
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Payroll.h"
#include "Efficiency.h"
#include "Pay.h"
#include "Employee.h"
using namespace std; 

int main()
{

	// Read database text file and import payroll data [Function Read]

	// Welcome user
	// Give payroll overview (number of employees and total annual cost from salaried employees)
	// Give command options:
	// 1 - search for employee, 2 - add employee, 3 - view employees [Function W]

	// 1 [Function]
	//	1 - search by name, 2 - search by ID, 0 - return (to Function W) [Function Search]
	//		1.1/1.2
	//		Shows Info [Function Show]
	//		1 - update pay/efficiency info, 2 - update personal info, 3 - remove employee [Function Remove], 0 - return (to Function W) [Function X]

	// 2 [Function]
	//	1 - enter basic info, 2 - enter all info, 0 - return (to Function W)
	//		2.1
	//		Input full name (caps, separated by space(s)) (First (Middle) Last) [Function Input PI]
	//		Input company position/job title (caps, separated by space(s))
	//		1 - salary, 2 - wage [Function SW]
	//			2.1.1
	//			Input annual salary [SW]
	//			2.1.2
	//			Input hourly wage [SW]

	//			Employee X added [Function Add Employee]
	//			Shows Info [Function Show]
	//		1 - update pay/efficiency info [Function Update PE], 2 - update personal info [Function Update PI], 3 - remove employee [Function Remove], 0 - return (to Function W) [Function X]

	//		2.2
	//		Input Personal Info: [Function Input PI Full]
	//		Input full name (caps, separated by space(s)) (First (Middle) Last)
	//		Input company position/job title (caps, separated by space(s))
	//		Input email
	//		Input phone number (no spaces)
	//		Input DOB (DD/MM/YYYY)
	//		Input date hired (DD/MM/YYYY)
	//		Input Pay Info:
	//		1 - salary, 2 - wage [Function SW]
	//			2.2.1
	//			Input annual salary [SW]
	//			2.2.2
	//			Input hourly wage [SW]

	//			[Function SW Full]

	//			Employee X added[Function Add Employee]
	//			Shows Info [Function Show]
	//		1 - update pay/efficiency info, 2 - update personal info, 3 - remove employee [Function Remove], 0 - return (to Function W) [Function X]

	// 3 [Function Show Employee list]


	// Matthew
	// Function Read

	// Function W (Welcome)

	// Function Search

	// Function Show

	// CREATE EMPLOYEE

	// Lucas
	// Function X (Employee Options)
	
	// Function Input PI (Personal Info)
	// Function Input PI Full (For full input of personal info)
	// Function Update PI


	// Parth
	// Function SW (Salary or Wage)
	// Function SW Full (For full input of Pay info based on if salary or wage)
	// Function Update PE (Pay/Efficiency)

	// Harjot
	// Function Add Employee

	// Function Show Employee list

	// Function Remove
	
	// Exception hanlder function (for when the user uses a wrong input)

	/*
	Payroll* FinalPay[3] = {
						  new Payroll(),
						  new Efficiency(),
						  new Employee(),
						  new Pay()
	};

	for (int i = 0; i < 3; i++) {
		Payroll[i]->print();
		cout << endl;
	}

	//Payroll[0]->setTitle("");
	//Payroll[0]->setDescripition("");
	//Payroll[0]->setType("");
	Efficiency*csPoint = static_cast<Efficiency*>(Payroll[1]);

	//csPoint->setTitle("");
	//csPoint->setDescription(x);
	//Pay* cgPoint = static_cast<Pay*>(Payroll[2]);
	
	//cgPoint->setName("");
	//cgPoint->setDescription();
	
	for (int i = 0; i < 3; i++) {
		Payroll[i]->print();
		cout << endl;
	} */
	return 0;
}

	 
void employeeOptions() {

	cout << "Please enter one of the following commands:" << endl;
	cout << "1 - Update Pay/Efficiency Information" << endl;
	cout << "2 - Update Personal Information" << endl;
	cout << "0 - Return to Main Menu" << endl;

	cin >> i;
// call exception handler?
	if (i == 1) {
		cout << "Update Pay/Efficiency Information..." << endl;
			// call corresponding SW Function
	}
	else if (i == 2) {
		cout << "Update Personal Information..." << endl;
			// call corresponding PI Function
	}
	else if (i == 0) {
		cout << "Return to Main Menu..." << endl;
			// call Welcome Function
	}

}
/*
Employee* createEmployee(int i) {

	Employee Ei;
	return Employee *Ei;

}
*/
void inputPI(int i, Employee* emp) {

	if (i == 1) {

		cout << "Input Personal Information" << endl << endl;

		cout << "Enter Employee Name with no spaces (JohnSmith): " << endl;
		cin >> emp->setName();
		cout << "Enter the Employee's Position with no spaces (GeneralManager): " << endl;
		cin >> emp->setPos();

	}
	else if (i == 2) {

		cout << "Input Personal Information" << endl << endl;

		cout << "Enter Employee Name with no spaces (JohnSmith): " << endl;
		cin >> emp->setName();
		cout << "Enter the Employee's Position with no spaces (GeneralManager): " << endl;
		cin >> emp->setPos();
		cout << "Enter the Employee's Date of Birth (DD/MM/YYYY): " << endl;
		cin >> emp->setDateOB();
		cout << "Enter the Employee's Email Address (example@company.ca): " < endl;
		cin >> emp->setEmail();
		cout << "Enter the Employee's Phone Number (1234567890): " < endl;
		cin >> emp->setPhone();
		cout << "Enter the Date on which the Employee was hired (DD/MM/YYYY): " < endl;
		cin >> emp->setDateH();

	}
}

/* string newemployee;

	 cout << " Payroll Management System " << endl;

	 cout << "Add a New Employee!" << endl;
	 cin >> newemployee;
	 cout << "Name:" << endl;

	 cout << "Date of Birth" << endl;

	 cout << "Position" << endl;

	 cout << "time with the company" << endl;*/
/* > Employee(payroll child class) --likely named with employee number(could be generated by personal info)
		 >> Personal Information(employee child class)
		 >> > Name
		 >> > D.O.B.
		 >> > Position
		 >> > Time with the company

		 >> Efficiency(employee child class)
		 >> > Sales numbers(array)
		 >> > Projects completed on time / late

		 >> Pay(employee child class)
		 >> > Hourly Wage(double) --could be constant or change with promotion
		 >> > Overtime Worked
		 >> > Bonus if efficiency is good
		 >> > Total to be paid(double) --can reset when the employee is paid
		 >> > Percentage of Total Annual Employment Cost -- just an idea
		 */
