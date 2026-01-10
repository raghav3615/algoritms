#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 2, 89, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest;
    return 0;
}
