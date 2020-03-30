#ifndef PAY_H
#define PAY_H

#include <iostream>

using namespace std;

class Pay
{
private:
	double HourlyWage;
	double Salary;
	double Hrs_Week;
	double Week_Cnst;
	double OvertimeWorked;
	double Bonus;
	double Total_Paid;
	double HoursWorked;

public:
	Pay();
	Pay(double, double);
	Pay(double, double, double, double);

	void setHourlyWage(double HW);
	void setSalary(double SY);
	void setHrs_Week(double HWK);
	void setWeek_Cnst(double WCST);
	void setOvertimeWorked(double OW);
	void setBonus(double BNS);
	void setTotal_Paid(double TPD);
	void setHoursWorked(double HWK);

	double getHourlyWage();
	double getSalary() const;
	double getHrs_Week() const;
	double getWeek_Cnst();
	double getOvertimeWorked();
	double getBonus() const;
	double getTotal_Paid() const;
	double getHoursWorked() const;

	virtual void Print() const;
};
#endif
