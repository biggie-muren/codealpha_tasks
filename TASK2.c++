//TASK2.c++
// This is a simple calculator program taking user input for two numbers and an operation...


#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Your Simple Calculator\n";
    cout << "Let's Go **************\n";

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input operation
    cout << "Let's choose an operation (+, -, *, /,%): ";
    cin >> operation;

    // Perform calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The sum is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The differnce is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The product is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The quotient is: " << result << endl;
            } else {
                cout << "Error detected: Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "The remainder is: " << result << endl;
            } else {
                cout << "Error detected: Division by zero is not allowed." << endl;
            }
            break;
      
        default:
            cout << "Error detected: Invalid operation selected." << endl;
            break;
    }

    return 0;
}
