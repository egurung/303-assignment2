#pragma once
#include "Employee.h" // Linking base class
#include <string>

class HourlyEmployee : Employee
{
public:
    HourlyEmployee();
    HourlyEmployee(string name, int id, bool updatedInfo, string jobStart, 
        double hoursWorked, double hourlyPay);
    
    double weeklySalary(); // per week 
    double healthCareCon(); // earned per month
    double vacaDays(); // earned per month

    double GetHoursWorked();
    void SetHoursWorked(double workedHours);

    double GetHourlyPay();
    void SetHourlyPay(double payHourly);

private:
    double hoursWorked; // Per Month
    double hourlyPay; // Per Hour

};

