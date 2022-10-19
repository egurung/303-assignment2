#include "SalaryEmployee.h" // Linking to header file
#include <string>

// Constructors
SalaryEmployee::SalaryEmployee() : Employee() {
	salary = 0.0;
	// Do I need?
	name = "";
	id = 0;
	updatedInfo = true;
	jobStart = "";
}

SalaryEmployee::SalaryEmployee(string name, int id, bool updatedInfo, string jobStart, 
	double salary) : Employee(name, id, updatedInfo, jobStart) {
	this->salary = salary;
	// Maybe not need?
	this->name = name;
	this->id = id;
	this->updatedInfo = updatedInfo;
	this->jobStart = jobStart;
}

// Weekly Salary Calculation
double SalaryEmployee::weeklySalary() {
	double pay = 0.0;
	pay = salary / 52; // Calcuating pay per week

	return pay;
}

// Health Care Calcuation (per month)
double SalaryEmployee::healthCareCon() {
	return 400.5; // Standard for all salaried employees
}

// Vacation Days Calculation (per year)
double SalaryEmployee::vacaDays() {
	double vaca = 25; // Standard for all salaried employees 

	return vaca;

}

// Getter and Setter 
/* Reminder;
*
string Employee::GetName() {
	return name;
}
void Employee::SetName(string nameEmployee) {
	name = nameEmployee;
}*/

double SalaryEmployee::GetSalary() {
	return salary;
}

void SalaryEmployee::SetSalary(double earnedSalary) {
	salary = earnedSalary; 
}
