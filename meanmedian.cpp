#include <iostream>
#include <algorithm>

using namespace std;

double calculate_mean(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

double calculate_median(int arr[], int size) {
    sort(arr, arr+size);

    if (size % 2 == 0) {
        return (double)(arr[size/2-1] + arr[size/2]) / 2.0;
    } else {
        return (double)arr[size/2];
    }
}

int main() {
    int arr[5];

    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    double mean = calculate_mean(arr, 5);
    double median = calculate_median(arr, 5);

    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;

    return 0;
}
