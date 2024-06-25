// main.cpp
#include <iostream>
#include "my_functions.h" // Εδώ κάνεις include το δικό σου header file

int main() {
    printHello();
    int sum = add(3, 4);
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
