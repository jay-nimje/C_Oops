#include <iostream>
#include <string>

class ConcatenatedString {
private:
    std::string str;

public:
    ConcatenatedString(const std::string& s) : str(s) {}

    ConcatenatedString operator+(const ConcatenatedString& other) {
        ConcatenatedString result(str + other.str);
        return result;
    }

    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "world!";

    ConcatenatedString concatenatedStr1(str1);
    ConcatenatedString concatenatedStr2(str2);

    ConcatenatedString result = concatenatedStr1 + concatenatedStr2;

    std::cout << "Concatenated String: ";
    result.display();

    return 0;
}

