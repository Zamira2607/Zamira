#include <iostream>
using namespace std;
//problem 5  (1st)
/*
double balance = 500.0;
void deposit(double amount);
void withdraw(double amount);
void checkBalance();


void deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
        cout << "Balance now: $" << balance << endl;
    } else {
        cout << "Invalid deposit amount.\n";
    }
}

void withdraw(double amount) {
    if (amount > balance) {
        cout << "Insufficient funds!" << balance << endl;
    } else {
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
        cout << "Balance now: $" << balance << endl;
    }
}

void checkBalance() {
    cout << "Current balance: $" << balance << endl;
}

int main() {
    int choice;
    double amount;

    do {
        cout << "\n======> Simple Banking System <======\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "Option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                withdraw(amount);
                break;

            case 3:
                checkBalance();
                break;

            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}*/

//problem 6 (2nd)
/*
double calculateTotal(double price, int tickets) {
    return price * tickets;
}

int main() {
    int choice, tickets;
    double total;

    cout << "=== Movie Ticket Booking System ===\n";
    cout << "1. Movie - Inside out- $8\n";
    cout << "2. Movie - Soul - $10\n";
    cout << "3. Movie - Interstellar - $12\n";
    cout << "Select your choice: ";
    cin >> choice;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    switch (choice) {
        case 1:
            total = calculateTotal(8, tickets);
            cout << "You selected Inseide out.\n";
            cout << "Total cost: $" << total << endl;
            break;

        case 2:
            total = calculateTotal(10, tickets);
            cout << "You selected Soul.\n";
            cout << "Total cost: $" << total << endl;
            break;

        case 3:
            total = calculateTotal(12, tickets);
            cout << "You selected Interstellar.\n";
            cout << "Total cost: $" << total << endl;
            break;

        default:
            cout << "Invalid choice. Please select between 1 and 3.\n";
    }

    return 0;
}*/

//problem 7 (3rd)
/*
int calculateFee(int hours) {
    int fee = 0;

    if (hours <= 2) {
        fee = 0;
    }
    else if (hours <= 5) {
        fee = (hours - 2) * 2;
    }
    else {
        fee = (3 * 2) + (hours - 5) * 5;
    }

    return fee;
}

int main() {
    int hours;

    cout << "======> Car Parking Fee Calculator <======" << endl;

    while (true) {
        cout << "        Enter number of hours parked: ";
        cin >> hours;

        if (hours <= 0) {
            cout << "Invalid hours" << endl;
            break;
        }

        int fee = calculateFee(hours);
        cout << "Parking fee: $" << fee << "\n" << endl;
    }

    return 0;
}*/

//problem 8    (4th)
/*
double calculateTotal(double price, int quantity) {
    return price * quantity;
}

int main() {
    int choice, quantity;
    double total = 0;
do {
    cout << "=== Restaurant Menu ===\n";
    cout << "1. Pizza - $10\n";
    cout << "2. Burger - $8\n";
    cout << "3. Salad - $5\n";
    cout << "Item: ";
    cin >> choice;

    cout << "Quantity: ";
    cin >> quantity;

    switch (choice) {
        case 1:
            total = calculateTotal(10, quantity);
            cout << "You ordered Pizza.\n";
            cout << "Total Bill: $" << total << endl;
            break;

        case 2:
            total = calculateTotal(8, quantity);
            cout << "You ordered Burger.\n";
            cout << "Total Bill: $" << total << endl;
            break;

        case 3:
            total = calculateTotal(5, quantity);
            cout << "You ordered Salad.\n";
            cout << "Total Bill: $" << total << endl;
            break;

        default:
            cout << "Invalid choice. Please select between 1 and 3.\n";
    }
} while (choice != 3);

    return 0;
}*/







