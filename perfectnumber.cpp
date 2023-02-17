#include <iostream>

using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}
void printPerfectNumbers(int start, int end) {
    cout << "Perfect numbers in the range " << start << " to " << end << " are:" << endl;
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int start, end;

    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    printPerfectNumbers(start, end);

    return 0;
}
