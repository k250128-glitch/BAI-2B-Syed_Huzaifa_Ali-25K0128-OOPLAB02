
#include <iostream>
#include <string>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int itemCount = 0;

public:
    void addItem(string name, double price) {
        items[itemCount] = name;
        prices[itemCount] = price;
        itemCount++;
    }

    void viewItems() {
        cout << "Items in shop:" << endl;
        for(int i = 0; i < itemCount; i++) {
            cout << i+1 << ". " << items[i] << " - $" << prices[i] << endl;
        }
    }

    void editPrice(int index, double newPrice) {
        if(index >= 1 && index <= itemCount) {
            prices[index-1] = newPrice;
            cout << "Price updated!" << endl;
        } else {
            cout << "Invalid item number!" << endl;
        }
    }

    void generateReceipt() {
        int n;
        cout << "How many different items did customer buy? ";
        cin >> n;
        string boughtItem;
        int qty;
        double total = 0;

        cout << "----- Receipt -----" << endl;
        for(int i = 0; i < n; i++) {
            cout << "Enter item name: ";
            cin >> boughtItem;
            cout << "Enter quantity: ";
            cin >> qty;

            bool found = false;
            for(int j = 0; j < itemCount; j++) {
                if(items[j] == boughtItem) {
                    double itemTotal = prices[j] * qty;
                    cout << items[j] << " x" << qty << " = $" << itemTotal << endl;
                    total += itemTotal;
                    found = true;
                    break;
                }
            }
            if(!found) {
                cout << boughtItem << " not found in shop!" << endl;
            }
        }
        cout << "Total: $" << total << endl;
        cout << "------------------" << endl;
    }
};

int main() {
    StationeryShop shop;
    int choice;

    do {
        cout << "\nStationery Shop Menu\n";
        cout << "1. Add Item\n2. View Items\n3. Edit Price\n4. Generate Receipt\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            string name;
            double price;
            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
            shop.addItem(name, price);
        } else if(choice == 2) {
            shop.viewItems();
        } else if(choice == 3) {
            int num;
            double newPrice;
            shop.viewItems();
            cout << "Enter item number to edit price: ";
            cin >> num;
            cout << "Enter new price: ";
            cin >> newPrice;
            shop.editPrice(num, newPrice);
        } else if(choice == 4) {
            shop.generateReceipt();
        } else if(choice == 5) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
