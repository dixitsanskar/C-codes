#include <iostream>

int main() {
    int rows = 4;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
       
        for (int j = 1; j <= i; j++) {
            std::cout << num;
            num++;
        }
    
        for (int j = 1; j <= i - 1; j++) {
            std::cout << num - 2 * j;
        }
        
        std::cout << std::endl;
        
    }
    return 0;
}
