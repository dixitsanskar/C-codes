#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x, sum = 1, term = 1, fact = 1;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        fact *= i;           // Calculate factorial of i
        term = pow(-1, i) * pow(x, i) / fact;  // Calculate term i of the series
        sum += term;         // Add term i to the sum
    }
    
    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
