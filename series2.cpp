#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

double seriesSum(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i) / i;
    }
    return sum;
}

int main() {
    double result = seriesSum(5);
    cout << "The sum of the series is: " << result << endl;
    return 0;
}
