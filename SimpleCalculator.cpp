#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
     cout << "\n Simple Calculator" ;
    cout << "\n Choose an operation: " ;
    cout << " \n + : Addition" ;
    cout << " \n - : Subtraction" ;
    cout << "\n  * : Multiplication" ;
    cout << "\n  / : Division" ;
    cout << "\n Enter first number: ";
    cin >> num1;
    cout << "\n Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 ;
            break;
        case '-':
            cout << "Result: " << num1 - num2 ;
            break;
        case '*':
            cout << "Result: " << num1 * num2 ;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 ;
            } else {
                cout << "Error: Division by zero is not allowed";
            }
            break;
        default:
            cout << "Error: Invalid operation" ;
    }

    return 0;
}
