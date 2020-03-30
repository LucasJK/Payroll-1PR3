//Payroll.h
//child
//Number of Employees (static) 
//Total Annual Employment Cost(static)
#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>
#include<string>
#include<cstring>
using namespace std;
class Payroll {
protected:
	static int NumofEmployee;//NoE
	static double TotalAnnualEmploymentCost;//will refer as TAEC 
public:
	//default constructor
	Payroll();
	//constructor 
	Payroll(static int, static double);
	void setNumofEmployee(int);
	void setTotalAnnualEmploymentCost(double);
	//accessors
	int getNumofEmployee() const;
	double getTotalAnnualEmploymentCost() const;
	virtual void print() const;
};
#endif 
