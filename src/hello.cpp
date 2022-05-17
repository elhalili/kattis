#include <iostream>

int main() {
    std::ostream myOut(std::cout.rdbuf());
    myOut << "Hello World!";

    return 0;
}