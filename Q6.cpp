#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void readData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    double percentage;

public:
    Student(const std::string& n, int a, double p) : Person(n, a), percentage(p) {}

    void readData() {
        Person::readData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const std::string& n, int a, double s) : Person(n, a), salary(s) {}

    void readData() {
        Person::readData();
        std::cout << "Enter salary: $";
        std::cin >> salary;
    }

    void displayData() {
        Person::displayData();
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    std::string name;
    int age;
    double percentage, salary;

    std::cout << "Enter student's data:" << std::endl;
    Student student("Unknown", 0, 0.0);
    student.readData();

    std::cout << "\nEnter teacher's data:" << std::endl;
    Teacher teacher("Unknown", 0, 0.0);
    teacher.readData();

    std::cout << "\nStudent's data:" << std::endl;
    student.displayData();

    std::cout << "\nTeacher's data:" << std::endl;
    teacher.displayData();

    return 0;
}

