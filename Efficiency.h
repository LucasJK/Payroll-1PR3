
// Efficiency.h
#ifndef EFFICIENCY_H
#define EFFICIENCY_H
#include <iomanip>
#include"iostream"
using namespace std;

class Efficiency {
private:
	// Variables
	double projectsFinished;
	double projectsRemaining;
	double days;
public:
	// Default Constructor 
	Efficiency();
	// Constructors
	Efficiency(double, double, double);
	void setProjects(double);
	void setProjectsRemaining(double);
	void setDay(double);

	// Accessors
	double getProjects() const;
	double getProjectsRemaining() const;
	double getDay() const;
	double getEfficiency() const;
	double getCompletion() const;

	// Print Statement that is linked to parent class
	virtual void print() const;

};

#endif

