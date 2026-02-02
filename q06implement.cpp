#include "employee.h"
#include <iostream>
using namespace std;

void Employee::get_data() {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter monthly salary: ";
    cin >> monthlySalary;
}
 double Employee::Salary_after_tax() {
     double taxAmount = (taxPercentage / 100.0) * monthlySalary;
    return monthlySalary - taxAmount;
}
void Employee::update_tax_percentage(double newRate) {
    taxPercentage = newRate;
    cout << "Tax rate is now " << taxPercentage << "%." << endl;
}
void Employee::display() {
        cout << "\n--- Payday Reality Check ---" << endl;
        cout << "Employee: " << name <<endl;
        cout << "Gross Salary: $" << monthlySalary << endl;
        cout << "Current Tax: " << taxPercentage << "%" << endl;
        cout << "Take-home Pay: $" << Salary_after_tax() << endl;
}
