#include "Pay.h"
#include <iostream>

using namespace std;

Pay::Pay()
{
	HourlyWage = OvertimeWorked = Bonus = Total_Paid = 0;
}

Pay::Pay(double HW, double OW)
{
	HourlyWage = HW;
	OvertimeWorked = OW;
}

Pay::Pay(double HW, double OW, double BNS, double TPD)
{
	HourlyWage = HW;
	OvertimeWorked = OW;
	Bonus = BNS;
	Total_Paid = TPD;
}

void Pay::setHourlyWage(double HW)
{
	HourlyWage = HW;
}

void Pay::setSalary(double SY)
{
	Salary = SY;
}

void Pay::setHrs_Week(double HWK)
{
	Hrs_Week = HWK;
}

void Pay::setWeek_Cnst(double WCST)
{
	Week_Cnst = WCST;
}

void Pay::setOvertimeWorked(double OW)
{
	OvertimeWorked = OW;
}

void Pay::setBonus(double BNS)
{
	Bonus = BNS;
}

void Pay::setTotal_Paid(double TPD)
{
	Total_Paid = TPD;
}

void Pay::setHoursWorked(double HWK)
{
	HoursWorked = HWK;
}

double Pay::getHourlyWage()
{
	cout << "Please Enter Your Annual Salary: " << Salary << endl;
	cout << "Please Enter The Number Of Hours That You Work Per Week: " << Hrs_Week << endl;
	Week_Cnst = Hrs_Week * 52;
	HourlyWage = Salary / Week_Cnst;
	return  HourlyWage;
}

double Pay::getSalary() const
{
	return Salary;
}

double Pay::getHrs_Week() const
{
	return Hrs_Week;
}

double Pay::getWeek_Cnst()
{
	return Week_Cnst;
}

double Pay::getOvertimeWorked()
{
	cout << "Please Enter The Number Of Hours That You Worked Overtime:" << HoursWorked << endl;
	OvertimeWorked = HourlyWage * 1.5 * HoursWorked;
	return OvertimeWorked;
}

double Pay::getBonus() const
{   //Bonus Is Only Recived If The Efficiency Is Greater Than 80%
	return Bonus;
}

double Pay::getTotal_Paid() const
{
	return Total_Paid;
}

double Pay::getHoursWorked() const
{
	return HoursWorked;
}


void Pay::Print() const
{
	cout << "Hourly Wage: " << HourlyWage << endl;
	cout << "OvertimeWorked: " << OvertimeWorked << endl;
	cout << "Bonus: " << Bonus << endl;
	cout << "Total Paid:" << Total_Paid << endl;
}
