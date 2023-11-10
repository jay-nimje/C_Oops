#include <iostream>

inline double multiply(double a, double b) {
    return a * b;
}

inline double cubic(double x) {
    return x * x * x;
}

int main() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    double product = multiply(num1, num2);
    std::cout << "Multiplication value: " << product << std::endl;

    double result = cubic(num1);
    std::cout << "Cubic value of the first number: " << result << std::endl;

    result = cubic(num2);
    std::cout << "Cubic value of the second number: " << result << std::endl;

    return 0;
}

