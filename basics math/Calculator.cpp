#include <iostream>
using namespace std;

int main() {
   
    // CALCULATOR PROGRAM
    double num1, num2, result;
    char op;
    // Display a welcome message    
    cout << "Welcome to the Calculator Program!" << endl;
    cout << "This program performs basic arithmetic operations." << endl;
    cout << "Please enter two numbers and an operator (+, -, *, /): " << endl;
    // Take user input
    cin >> num1 >> num2 >> op;
    // Perform the operation based on the operator
    if (op == '+') {
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
    } else if (op == '/') {
        result =  num1 / num2;
        if (num2 != 0) {
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }       
    } else { 
        cout << "You enter a invalid operator." << endl;
    }
    return 0;
}
