#include <iostream>

using namespace std;

long long power(int a, int b) {
    if (b == 0) {
        return 1;
    } else if (b % 2 == 0) {
        long long half = power(a, b/2);
        return half*half;
    } else {
        long long half = power(a, (b-1)/2);
        return half*half*a;
    }
}

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    long long result = power(a, b);

    cout << a << " raised to power " << b << " is: " << result << endl;

    return 0;
}
