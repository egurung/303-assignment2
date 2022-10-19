#pragma once
#include "Employee.h" // Linking base class
#include <string>

class SalaryEmployee : Employee
{
public:
    SalaryEmployee();
    SalaryEmployee(string name, int id, bool updatedInfo, string jobStart, double salary);

    double weeklySalary(); // per week
    double healthCareCon(); // per month
    double vacaDays(); // per year 

    double GetSalary();
    void SetSalary(double earnedSalary);

private:
    double salary; // Per Year

};

