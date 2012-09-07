// Author: Jason Blanchard
// Find the greatest product of 5 consecutive digits in a
// 1000 digit number.

#include <iostream>
#include <fstream>
#include <stdlib.h>

int main() {
    std::ifstream file;
    char c = ' ';
    int array_index = 0;
    int array[5] = {0,0,0,0,0};
    int max_product = 0, current_product = 1;

    file.open("number", std::ios::in);

    if (file.is_open()) {
        while (file.good()) {
            c = file.get();

            if (c >= '0' && c <= '9') {
                array[array_index] = atoi(&c);
            }

            for (int i = 0; i < 5; ++i) {
                current_product *= array[i];
            }
            if (current_product > max_product)
                max_product = current_product;

            current_product = 1;

            ++array_index;
            if (array_index > 4)
                array_index = 0;
        }

        std::cout << "Max product is " << max_product << std::endl;
    } else {
        std::cout << "Error opening file." << std::endl;
    }

    file.close();

    return 0;
}
