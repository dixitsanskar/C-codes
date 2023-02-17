#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0; 

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n-2; i++) {
        sum += i*(i+1)*(i+2);
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
