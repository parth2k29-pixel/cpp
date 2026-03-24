#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tableNo, n;
    string customerName, contact;

    cout << "Enter Table Number: ";
    cin >> tableNo;

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Customer Contact: ";
    getline(cin, contact);

    cout << "Enter number of items: ";
    cin >> n;

    string itemName[n];
    int quantity[n];
    float price[n], total[n];

    float grandTotal = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << endl;

        cout << "Item Name: ";
        cin >> itemName[i];

        cout << "Quantity: ";
        cin >> quantity[i];

        cout << "Price per unit: ";
        cin >> price[i];

        total[i] = quantity[i] * price[i];
        grandTotal += total[i];
    }

    float discount = 0;

    if (grandTotal > 5000)
        discount = 0.20 * grandTotal;
    else if (grandTotal > 3000)
        discount = 0.10 * grandTotal;
    else if (grandTotal > 1000)
        discount = 0.05 * grandTotal;

    float finalAmount = grandTotal - discount;

    cout << "\n\n----------- Hotel Bill -----------\n";
    cout << "Table No.: " << tableNo << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Customer Contact: " << contact << endl;

    cout << "\nOrder Details:\n";
    cout << left << setw(10) << "Item"
         << setw(10) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << itemName[i]
             << setw(10) << quantity[i]
             << setw(10) << price[i]
             << setw(10) << total[i] << endl;
    }

    cout << "\nTotal Amount: " << grandTotal << endl;
    cout << "Discount: -" << discount << endl;
    cout << "Final Amount: " << finalAmount << endl;

    return 0;
}
