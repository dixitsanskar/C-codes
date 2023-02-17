#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int start, end, num, sum, digit, temp;

    cout << "Enter the start and end of the range: ";
    cin >> start >> end;

    cout << "Armstrong numbers in the range " << start << " to " << end << " are:" << endl;

    for (int i = start; i <= end; i++) {
        num = i;
        sum = 0;

        while (num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i) {
            cout << i << endl;
        }
    }

    return 0;
}
