#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
}

int main() {
    int int1, int2;
    double double1, double2;

    std::cout << "Enter two integers for addition: ";
    std::cin >> int1 >> int2;
    std::cout << "Sum (int): " << add(int1, int2) << std::endl;

    std::cout << "Enter two integers for subtraction: ";
    std::cin >> int1 >> int2;
    std::cout << "Difference (int): " << subtract(int1, int2) << std::endl;

    std::cout << "Enter two integers for multiplication: ";
    std::cin >> int1 >> int2;
    std::cout << "Product (int): " << multiply(int1, int2) << std::endl;

    std::cout << "Enter two integers for division: ";
    std::cin >> int1 >> int2;
    std::cout << "Quotient (int): " << divide(int1, int2) << std::endl;

    std::cout << "Enter two doubles for addition: ";
    std::cin >> double1 >> double2;
    std::cout << "Sum (double): " << add(double1, double2) << std::endl;

    std::cout << "Enter two doubles for subtraction: ";
    std::cin >> double1 >> double2;
    std::cout << "Difference (double): " << subtract(double1, double2) << std::endl;

    std::cout << "Enter two doubles for multiplication: ";
    std::cin >> double1 >> double2;
    std::cout << "Product (double): " << multiply(double1, double2) << std::endl;

    std::cout << "Enter two doubles for division: ";
    std::cin >> double1 >> double2;
    std::cout << "Quotient (double): " << divide(double1, double2) << std::endl;

    return 0;
}

