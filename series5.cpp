#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x, sum = 0, term, fact = 1;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= (2 * i - 1) * (2 * i);  
        term = pow(-1, i + 1) * pow(x, 2 * i - 1) / fact;  
        sum += term;         
    }
    
    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
