#include <iostream> // Required for std::cout and std::endl
#include "MathFunctions.h"


int main(int argc, char* argv[]) {
    // std::cout is used to send data to the standard output stream (console).
    // The '<<' sperator is the insertion operator, used to insert data into the stream.
    std::cout << "Hello, C++ World!" << std::endl;
    std::cout << exponent(2,3) << std::endl;

    // The 'main' function typically returns an integer value.
    // A return value of 0 indicates successful program execution.
    return 0;
}