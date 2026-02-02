
#include <iostream>
#include <string>
using namespace std;

class BoardMarker {
private:
    string company;
    string color;
    bool refillable;
    bool inkEmpty;

public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string col) {
        color = col;
    }

    void setRefillable(bool r) {
        refillable = r;
    }

    void setInkStatus(bool ink) {
        inkEmpty = ink;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    bool isRefillable() {
        return refillable;
    }

    bool isInkEmpty() {
        return inkEmpty;
    }

    void write() {
        if (inkEmpty) {
            cout << "Cannot write. Ink is empty." << endl;
        } else {
            cout << "Writing..." << endl;
        }
    }

    void refill() {
        if (refillable) {
            inkEmpty = false;
            cout << "Marker has been refilled." << endl;
        } else {
            cout << "This marker cannot be refilled." << endl;
        }
    }
};

int main() {
    BoardMarker m1;
    m1.setCompany("Dollar");
    m1.setColor("Black");
    m1.setRefillable(true);
    m1.setInkStatus(true);

    BoardMarker m2;
    m2.setCompany("Piano");
    m2.setColor("Red");
    m2.setRefillable(false);
    m2.setInkStatus(false);

    BoardMarker m3;
    m3.setCompany("Faber-Castell");
    m3.setColor("Blue");
    m3.setRefillable(true);
    m3.setInkStatus(true);

    cout << "\nMarker 1:" << endl;
    m1.write();
    m1.refill();
    m1.write();

    cout << "\nMarker 2:" << endl;
    m2.write();
    m2.refill();

    cout << "\nMarker 3:" << endl;
    m3.write();
    m3.refill();
    m3.write();

    return 0;
}
