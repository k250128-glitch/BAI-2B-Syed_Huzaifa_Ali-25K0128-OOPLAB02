#include <iostream>
#include "Employee.h"

using namespace std;

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
