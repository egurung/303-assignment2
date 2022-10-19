#include "Employee.h" // Linking to header file
#include <string>
using namespace std;

// Constructors
Employee::Employee(){
	name = "";
	id = 0;
	updatedInfo = true;
	jobStart = "";
}

Employee::Employee(string name, int id, bool updatedInfo, string jobStart) {
	this->name = name;
	this->id = id;
	this->updatedInfo = updatedInfo;
	this->jobStart = jobStart;
}

// Getters and Setters 
string Employee::GetName() {
	return name;
}
void Employee::SetName(string nameEmployee) {
	name = nameEmployee;
}

int Employee::GetID() {
	return id;
}
void Employee::SetID(int idEmployee) {
	id = idEmployee;
}

bool Employee::GetInfo() {
	return updatedInfo;
}
void Employee::SetInfo(bool infoEmployee) {
	updatedInfo = infoEmployee;
}

string Employee::GetStart() {
	return jobStart;
}
void Employee::SetStart(string startEmployee) {
	jobStart = startEmployee;
}


