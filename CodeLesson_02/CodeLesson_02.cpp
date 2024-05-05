#include <iostream>
#include "Helpers.h"

int main() {
    int a = 5;
    int b = 7;

    int result = squareOfSum(a, b); 

    std::cout << "Square of sum of " << a << " and " << b << " is: " << result << std::endl;

    return 0;
}