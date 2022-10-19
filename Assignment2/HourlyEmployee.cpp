#include "HourlyEmployee.h" // Linking to header file
#include <string>

// Constructors
HourlyEmployee::HourlyEmployee() : Employee() {
	hoursWorked = 0.0;
	hourlyPay = 0.0;

	// Do I need?
	name = "";
	id = 0;
	updatedInfo = true;
	jobStart = "";
}

HourlyEmployee::HourlyEmployee(string name, int id, bool updatedInfo, string jobStart,
	double hoursWorked, double hourlyPay) : Employee(name, id, updatedInfo, jobStart) {
	this->hoursWorked = hoursWorked;
	this->hourlyPay = hourlyPay;
	
	// Maybe not need?
	this->name = name;
	this->id = id;
	this->updatedInfo = updatedInfo;
	this->jobStart = jobStart;
}

// Weekly Salary Calculation
double HourlyEmployee::weeklySalary() {
	double pay = 0.0;
	pay = (hoursWorked / 4) * hourlyPay; // Weekly pay equation
	
	return pay;
}

// Health Care Calcuation (per month)
double HourlyEmployee::healthCareCon() {
	return 200.50; // Standard for all hourly employees
}

// Vacation Days Calculation (per month)
double HourlyEmployee::vacaDays() {
	double vaca;
	vaca = hoursWorked * 0.05; // Determined by hours worked

	return vaca;

}

// Getters and Setters 

/* Reminder; 
* 
string Employee::GetName() {
	return name;
}
void Employee::SetName(string nameEmployee) {
	name = nameEmployee;
}*/

double HourlyEmployee::GetHoursWorked() {
	return hoursWorked;
}
void HourlyEmployee::SetHoursWorked(double workedHours) {
	hoursWorked = workedHours;
}

double HourlyEmployee::GetHourlyPay() {
	return hourlyPay;
}
void HourlyEmployee::SetHourlyPay(double payHourly) {
	hourlyPay = payHourly; 
}