#include <iostream>
#include <cmath>

using namespace std;

double fact(int n) {  
    double res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

double series(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double sign = pow(-1, i + 1);
        double num = i;
        double den = fact(2 * i - 1);
        sum += sign * num / den;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Sum of the series is: " << series(n) << endl;
    return 0;
}
