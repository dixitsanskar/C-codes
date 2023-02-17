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

    for (int i = 2; i <= 2 * n; i += 2) {
        fact *= (i - 1) * i; 
        term = pow(-1, i / 2) * pow(x, i) / fact;
        sum += term;         
    }
    
    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
