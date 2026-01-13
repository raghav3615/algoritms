#include <iostream>
using namespace std;

int main () {
    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "GCD is not defined for divisor zero." << endl;
        return 1;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "GCD is: " << a << endl;    
}