#include <iostream>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double capacityL;
    int capacityML;

public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string col) {
        color = col;
    }

    void setCapacity(double l) {
        capacityL = l;
        capacityML = l * 1000;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    double getCapacityL() {
        return capacityL;
    }

    int getCapacityML() {
        return capacityML;
    }

    void drinkWater() {
        int drankML;
        cout << "How much water did you drink in ml? ";
        cin >> drankML;

        if(drankML > capacityML) {
            cout << "You drank more than available! Bottle is now empty." << endl;
            capacityML = 0;
            capacityL = 0;
        } else {
            capacityML -= drankML;
            capacityL = capacityML / 1000.0;
        }
    }
};

int main() {
    WaterBottle wb;

    wb.setCompany("Nestle");
    wb.setColor("Blue");
    wb.setCapacity(1.5);

    cout << "Bottle info:" << endl;
    cout << "Company: " << wb.getCompany() << endl;
    cout << "Color: " << wb.getColor() << endl;
    cout << "Capacity: " << wb.getCapacityL() << " L (" << wb.getCapacityML() << " ml)" << endl;

    wb.drinkWater();

    cout << "After drinking, remaining water: " << wb.getCapacityL() << " L (" 
         << wb.getCapacityML() << " ml)" << endl;

    return 0;
}
