#include <iostream>
#include <string>
 using namespace std;
class Employee {
public:
    std::string name;
    double monthlySalary;
    double taxPercentage =2.0;

    void get_data() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter monthly salary: ";
        cin >> monthlySalary;
        
    }
    
    double Salary_after_tax() {
        double taxAmount = (taxPercentage / 100.0) * monthlySalary;
        return monthlySalary - taxAmount;
    }

    
    void update_tax_percentage(double newRate) {
        taxPercentage = newRate;
        cout << "Tax rate is now " << taxPercentage << "%." << endl;
    }

    void display() {
        cout << "\n--- Payday Reality Check ---" << endl;
        cout << "Employee: " << name <<endl;
        cout << "Gross Salary: $" << monthlySalary << endl;
        cout << "Current Tax: " << taxPercentage << "%" << endl;
        cout << "Take-home Pay: $" << Salary_after_tax() << endl;
    }
};

int main() {
    double new_tax_rate;
    Employee e; 

    
    e.get_data();
    e.display();
    
   cout << "\nEnter new tax rate: ";
   cin >> new_tax_rate;
   e.update_tax_percentage(new_tax_rate);

    
    e.display();
    return 0;
}
