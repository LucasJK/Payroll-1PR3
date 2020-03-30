//Efficiency.cpp
#include "Efficiency.h"
// Default Constructor
Efficiency::Efficiency() {
	// Initialize Variables to 0
	projectsFinished = 0.0;
	projectsRemaining = 0.0;
	days = 0.0;
}
// Constructor
Efficiency::Efficiency(double pf, double pr, double dp) {
	projectsFinished = pf;
	projectsRemaining = pr;
	days = dp;
}

// Set Functions
void Efficiency::setProjects(double p) {
	projectsFinished = p;
}

void Efficiency::setProjectsRemaining(double r) {
	projectsRemaining = r;
}

void Efficiency::setDay(double d) {
	days = d;
}

// Get Functions
double Efficiency::getProjects() const {
	return projectsFinished;
}
double Efficiency::getProjectsRemaining() const {
	return projectsRemaining;
}
double Efficiency::getDay() const {
	return days;
}

// Find the Project Completion Percentage
double Efficiency::getCompletion() const {
	double completion;
	double total = projectsFinished + projectsRemaining;
	completion = projectsFinished / total * 100.0;
	return completion;
}
// Function to FInd the Efficiency of the Worker
double Efficiency::getEfficiency() const {

	// A Project should be finished every two weeks 
	double dayPercent = days / 14.0;

	// Efficiency is based on how many projects completed / projects that should be completed 
	double eff = projectsFinished / dayPercent * 100.0;
	return eff;
}

// Print Function
void Efficiency::print() const {
	cout << endl << endl << endl << "****************************" << endl;
	cout << "Worker Effciency Update: " << endl;
	cout << "============================" << endl;
	cout << "Projects Finished: " << projectsFinished << endl;
	cout << "Projects Remaining: " << projectsRemaining << endl;
	cout << fixed << setprecision(2) << "Project Completion: " << getCompletion() << "%" << endl;
	cout << "Worker Efficinecy: " << getEfficiency() << "%" << endl;
}