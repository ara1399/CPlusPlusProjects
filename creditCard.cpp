// week7assignment2
// Arham Riaz Ali
// Professor Keith Smith
// TCCD

#include <iostream>
#include <string>
using namespace std;

struct CreditCard {
    int itemNumber;
    string itemName;
    int itemQuantity;
    double totalCost;
    long long creditCardNumber;
    string creditCardUserName;
    int creditCardExpirationMonthYear;
    int creditCardSecurityCode;
    bool isValid = false;
};

void displayStructure(CreditCard creditInfo) {
    cout << "\nThe item number is " << creditInfo.itemNumber << endl;
    cout << "The name of the item is " << creditInfo.itemName << endl;
    cout << "The quantity of that item is " << creditInfo.itemQuantity << endl;
    cout << "The total cost of the item is $" << creditInfo.totalCost << endl;
    cout << "The credit card number is " << creditInfo.creditCardNumber << endl;
    cout << "The username of the credit card is " << creditInfo.creditCardUserName << endl;
    cout << "The credit card expiration month and year is " << creditInfo.creditCardExpirationMonthYear << endl;
    cout << "The credit card security code is " << creditInfo.creditCardSecurityCode << endl;
    cout << "The item number is valid: " << creditInfo.isValid << endl;
}

//preCheck method, defining the items
void preCheck(CreditCard& creditCardInfo) {
    if (creditCardInfo.itemNumber == 1001) {
        creditCardInfo.itemName = "Foam Padding";
        creditCardInfo.totalCost = 8.50 * creditCardInfo.itemQuantity;
        creditCardInfo.isValid = true;
    }
    else if (creditCardInfo.itemNumber == 1002) {
        creditCardInfo.itemName = "Box Tape";
        creditCardInfo.totalCost = 10.11 * creditCardInfo.itemQuantity;
        creditCardInfo.isValid = true;
    }
    else if (creditCardInfo.itemNumber == 1003) {
        creditCardInfo.itemName = "Moving Blanket";
        creditCardInfo.totalCost = 22.00 * creditCardInfo.itemQuantity;
        creditCardInfo.isValid = true;
    }
    else if (creditCardInfo.itemNumber == 1004) {
        creditCardInfo.itemName = "Moving Box";
        creditCardInfo.totalCost = 4.75 * creditCardInfo.itemQuantity;
        creditCardInfo.isValid = true;
    }
}
//main method
int main()
{
    cout << boolalpha;
    CreditCard item;

    //prompting for the item information
    cout << "Enter item number ";
    cin >> item.itemNumber;
    cout << "Enter quantity ";
    cin >> item.itemQuantity;

    //calling the precheck method
    preCheck(item);

    //prompting for the credit card info if the item 
    if (item.isValid == true) {
        cout << "Enter the credit card number ";
        cin >> item.creditCardNumber;

        cout << "Enter credit card user name ";
        cin >> item.creditCardUserName;
        //getline(cin, item.creditCardUserName); (not working)
        
        cout << "Enter credit card expiration month and year (MMYY) ";
        //cin.ignore();
        cin >> item.creditCardExpirationMonthYear;

        cout << "Enter credit card security code (XXX) ";
        cin >> item.creditCardSecurityCode;

    }
    else {
        cout << "Item number is not valid " << endl;
        return 0;
    }
    //displaying evything
    displayStructure(item);

}
