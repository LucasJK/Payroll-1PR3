//Matthew Fernandes, Lucas Kupiec 
//400237897, 400068179
#include <iostream>
#include <fstream>
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



	// Function Read

	// Function W (Welcome)

	// Function Search

	// Function Show

	// Function X (Employee Options)

	// Function Input PI (Personal Info)
	// Function Input PI Full (For full input of personal info)
	// Function Update PI

	// Function SW (Salary or Wage)
	// Function SW Full (For full input of Pay info based on if salary or wage)
	// Function Update PE (Pay/Efficiency)


	
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

	 
// Function Add Employee
void addEmployee() {
	Employee e;
	ofstream inFile;
	inFile.open("Database.txt");
	inFile << e.getName() << " " << e.getId() << " " << e.getPos() << " " << e.getDateOB() << " " << e.getEmail() << " " << e.getPhone() << " " << e.getDateH();
	inFile.close();
}
// Function Show Employee list
void printEmployee () {
Employee e;
cout << "ID Number: " << e.getId() << endl;
cout << "Name: " << e.getName() << endl;
cout << "Company Position: " << e.getPos() << endl;
cout << "Email Address: " << e.getEmail() << endl;
}
// Function Remove
void removeEmployee() {
	string employee;
	ifstream file;
	ofstream temp;
	file.open("Database.txt");
	temp.open("Temp.txt");
	cout << "Which Employee would you like to delete ?" << endl;
	cin >> employee;

	while (getline(file, temp)) {
		line.replace(line.find(employee), employee.length(), "");
		temp << line << endl;
	}
	temp.close();
	file.close();
	remove("Database.txt");
	rename("Temp.txt", "Database.txt");
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
