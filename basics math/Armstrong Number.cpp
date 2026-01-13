// Armstrong Number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, temp = n, digits = 0;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    // Calculate the sum of cubes of each digit
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n) {
        cout << n << " is an Armstrong number.";
    } else {
        cout << n << " is not an Armstrong number.";
    }

    return 0;
}