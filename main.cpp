#include <iostream>
#include <iomanip> // fixed setprecision
#include <cmath> // ceil(), round(), floor()

using namespace std;

const double NUM_SLICES = 8.0; // per pizza
const double GST_TAX = 0.05; // 5% in decimal

//------------------ prototypes ----------------------
int calcSlicesNeeded(int guests, int slicesPerGuest);
// TODO finish prototypes



//----------------- main function --------------------
int main()
{
    string partyName;
    int numGuests;
    int slicePerGuest;
    int slicesNeeded;
    int pizzasNeeded;
    double costPerPizza;
    double subTotal;
    double gst;
    double total;
    double costPerPerson;


    cout << "Party name: ";
    getline(cin, partyName);
    //cin >> partyName;
    cout << "Number of guests: " << endl;
    cin >> numGuests;
    cout << "Slices per guest: " << endl;
    cin >> slicePerGuest;
    cout << "Price per pizza: " << endl;
    cin >> costPerPizza;

    slicesNeeded = numGuests * slicePerGuest;
    pizzasNeeded = ceil(slicesNeeded / NUM_SLICES);

    subTotal = pizzasNeeded * costPerPizza;
    gst = subTotal * GST_TAX;
    total  = subTotal + gst;
    costPerPerson = total / numGuests;

    cout << "======================================" << endl;
    cout << "         PIZZA PARTY PLANNER          " << endl;
    cout << "======================================" << endl;
    cout << "Party:               " << partyName << endl;
    cout << "Guests:              " << numGuests << endl;
    cout << "Slices needed:       " << slicesNeeded << endl;
    cout << "Pizzas to order:     " << pizzasNeeded << endl;
    cout << "--------------------------------------" << endl;
    cout << "Subtotal:            $" << subTotal << endl;
    cout << "GST (5%):            $" << gst << endl;
    cout << "Total:               $" << total << endl;
    cout << "Per Guest:           $" << costPerPerson << endl;
    cout << "======================================" << endl;

    return 0;
}

//----------------- function definitions ------------

