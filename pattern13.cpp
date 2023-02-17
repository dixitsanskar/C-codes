#include <iostream>
using namespace std;

int main() {
    int n, i, j, k;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (k = 1; k <= 2 * i - 1; k++) {
        cout << "* ";
        }
        cout <<endl;
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


