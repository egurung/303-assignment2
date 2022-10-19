#pragma once
#include <string>
using namespace std;

class Employee
{
public: // Base class is allowed to use
    Employee();

    Employee(string name, int id, bool updatedInfo, string jobStart);

    virtual double weeklySalary() = 0;
    virtual double healthCareCon() = 0;
    virtual double vacaDays() = 0; 

    string GetName();
    void SetName(string nameEmployee);

    int GetID();
    void SetID(int idEmployee);

    bool GetInfo();
    void SetInfo(bool infoEmployee);

    string GetStart();
    void SetStart(string startEmployee);

protected: // So that base class has access
    string name; // Name of employee
    int id; // Id of employee
    bool updatedInfo; // If the infomation is updated
    string jobStart; // Start date of employee
};

