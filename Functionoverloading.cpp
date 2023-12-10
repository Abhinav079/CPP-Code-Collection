#include <iostream>

class FunctionOverloadingExample {
public:
    // Function with two integer parameters
    int add(int a, int b) {
        return a + b;
    }

    // Function with three double parameters
    double add(double a, double b, double c) {
        return a + b + c;
    }

    // Function with a string parameter
    std::string concatenateStrings(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
};

int main() {
    FunctionOverloadingExample example;

    // Using the first add function (integers)
    int sum1 = example.add(5, 10);
    std::cout << "Sum of integers: " << sum1 << std::endl;

    // Using the second add function (doubles)
    double sum2 = example.add(2.5, 3.5, 4.5);
    std::cout << "Sum of doubles: " << sum2 << std::endl;

    // Using the concatenateStrings function
    std::string resultStr = example.concatenateStrings("Hello, ", "World!");
    std::cout << "Concatenated String: " << resultStr << std::endl;

    return 0;
}
