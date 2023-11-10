#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:

    Calculator(double a, double b) : num1(a), num2(b) {}

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }

    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Calculator calc(num1, num2);

    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    
    if (num2 != 0) {
        std::cout << "Division: " << calc.divide() << std::endl;
    }

    std::cout << "Multiplication: " << calc.multiply() << std::endl;

    return 0;
}

