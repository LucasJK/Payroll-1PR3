#include "Payroll.h"

Payroll::Payroll() {NumofEmployee = 0;TotalAnnualEmploymentCost = 0.0;}

Payroll::Payroll(static int NoE, static double TAEC) {NumofEmployee = 0;TotalAnnualEmploymentCost = 0.0;}

void Payroll::setNumofEmployee(static int NoE) {NumofEmployee = NoE;}

void Payroll::setTotalAnnualEmploymentCost( static double TAEC) {  TotalAnnualEmploymentCost = TAEC; }

double  Payroll::getTotalAnnualEmploymentCost() const {return  TotalAnnualEmploymentCost ;}

int  Payroll::getNumofEmployee() const {return NumofEmployee;}

void Payroll::print() const {
	cout << endl;
	cout << endl << endl << "****************************" << endl;
	cout << "PayRoll Update: " << endl;
	cout << "============================" << endl;
	cout << "Number of Employeee: " << NumofEmployee << endl;
	cout << "Total Annual Employment Cost: " << TotalAnnualEmploymentCost << endl;
}
#pragma once
