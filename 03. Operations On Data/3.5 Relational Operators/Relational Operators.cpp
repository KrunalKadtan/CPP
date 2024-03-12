#include <iostream>

int main()
{
    int number1 {45};
    int number2 {60};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << std::endl;

    std::cout << std::boolalpha;

    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

    bool result = (number1 == number2);
    std::cout << number1 << " == " << number2 << " : " << result << std::endl;

    return 0;
}