#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fib(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
