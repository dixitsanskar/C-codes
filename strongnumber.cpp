#include <iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Strong numbers less than or equal to " << N << " are: ";
    for (int i = 1; i <= N; i++) {
        if (isStrong(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
