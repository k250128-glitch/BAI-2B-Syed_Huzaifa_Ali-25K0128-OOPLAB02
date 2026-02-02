#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <iostream>


class Employee {
private:
    string name;
    double monthlySalary;
    double taxPercentage =2.0;
public:
    void get_data();
     double Salary_after_tax();
    void display();
    void update_tax_percentage(double newRate);
};
#endif 
