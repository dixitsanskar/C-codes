#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0, fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += fact;
    }

    cout << "The sum of the first " << n << " terms of the series is " << sum << endl;

    return 0;
}
