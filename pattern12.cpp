#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }

        for (int k = i; k >= 1; k--) {
            std::cout << k;
        }

        for (int l = 2; l <= i; l++) {
            std::cout << l;
        }

        std::cout << std::endl;
    }

    return 0;
}
