// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Employee.h" // Linking the base class
#include "HourlyEmployee.h" // Linking a derived class
#include "SalaryEmployee.h" // Linking a derived class

#include <string>
#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
    cout << "Testing Salary Employee Class" << endl;
    SalaryEmployee y("Emily", 1, false, "May 5, 2019", 100500.5); // Declaring a professional employee

    cout << "$" << y.weeklySalary() << " per week" << endl; // Outputting the weekly salary
    cout << "$" << y.healthCareCon() << " per month" << endl; // Outputting the health care contribution
    cout << y.vacaDays() << " vacation days per year" << endl; // Outputting the vacation days
    cout << endl;

    cout << "Testing Hourly Employee Class" << endl;
    HourlyEmployee g("Jack", 3, true, "July 5, 2020", 80.0, 15.0); // Declaring a non-professional employee

    cout << "$" << g.weeklySalary() << " per week" << endl; // Outputting the weekly salary
    cout << "$" << g.healthCareCon() << " per month" << endl; // Outputting the health care contribution
    cout << g.vacaDays() << " vacation days per month" << endl; // Outputting the vacation days

    return 0;
}

