#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "=== Simple Calculator ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result = 0;
    bool validOperation = true;

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                validOperation = false;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            validOperation = false;
    }

    if (validOperation) {
        cout << "\nResult: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }

    return 0;
}
