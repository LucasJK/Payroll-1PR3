//Matthew Fernandes 
//400237897
#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>
#include<string>
#include<cstring>
using namespace std;
class Payroll {
protected:
	int payroll_id;
	string  payroll_title;
	string  payroll_descriptions;
	string  payroll_type;
	int payroll_employee_id;
public:
	Payroll() {
		payroll_title = " ";
		payroll_descriptions = " ";
		payroll_type = " ";	
	}
	Payroll(int prid, int  premid) {
		payroll_id = prid;
		payroll_employee_id = premid;
	}

void setPayrollid(int prid) { payroll_id = prid; }
void setPayrollEmployeeID(int premid) { payroll_employee_id = premid; }
void setPayrolltitle() { payroll_title = " "; }
void setPayrollEmployeeDescription() { payroll_descriptions = " "; }
void setPayrolltype() { payroll_type = " "; }
int getPayrollid()const { return payroll_id; }
int getPayrollEmployeeid()const { return payroll_employee_id; }
string getPayrolltitle()const{return  payroll_title;}
string getPayrollDescription()const { return  payroll_descriptions; }
string getPayrolltype()const { return  payroll_type; }

};
#endif 


/*
+payroll_id:int
+payroll_title: string
+payroll_descriptions:string
+payroll_type:string
+payroll_employee_id: int
+addPayroll()
+editPayroll()
+deletePayroll()
+searchPayRoll()
*/
/*addPayroll() { }
editPayroll() { }
deletePayroll() { }
searchPayRoll() { }
*/