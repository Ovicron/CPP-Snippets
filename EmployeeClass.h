#pragma once
#include <string>

using namespace std;

class Employee {
public:
    Employee(string firstName, string lastName, int age);
    string FirstName{};
    string LastName{};
    string Email{};
    int Age{};
    inline static int NumberOfEmployees;

public:
    string getFullName() const;
    virtual ~Employee();
};
