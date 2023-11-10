#include <iostream>
#include <string>

class Student {
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {}

    void displayRollNumber() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int marks1, int marks2) : Student(roll), subject1Marks(marks1), subject2Marks(marks2) {}

    void displayMarks() {
        displayRollNumber();
        std::cout << "Subject 1 Marks: " << subject1Marks << std::endl;
        std::cout << "Subject 2 Marks: " << subject2Marks << std::endl;
    }
};

class Result : public Test {
public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {}

    int getTotalMarks() {
        return subject1Marks + subject2Marks;
    }

    void displayResult() {
        displayMarks();
        std::cout << "Total Marks: " << getTotalMarks() << std::endl;
    }
};

int main() {
    int roll, marks1, marks2;

    std::cout << "Enter Roll Number: ";
    std::cin >> roll;
    std::cout << "Enter Marks for Subject 1: ";
    std::cin >> marks1;
    std::cout << "Enter Marks for Subject 2: ";
    std::cin >> marks2;

    Result studentResult(roll, marks1, marks2);

    std::cout << "\nStudent's Result:" << std::endl;
    studentResult.displayResult();

    return 0;
}

