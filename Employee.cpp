#include "../Header Files/Employee.h"

Employee::Employee(string firstName, string lastName, int age) {
    this->FirstName = move(firstName);
    this->LastName = move(lastName);
    this->Email = LastName + FirstName + "@company.com";
    this->Age = age;
    NumberOfEmployees++;
}

string Employee::getFullName() const {
    return FirstName + " " +  LastName;

}

Employee::~Employee() = default;
