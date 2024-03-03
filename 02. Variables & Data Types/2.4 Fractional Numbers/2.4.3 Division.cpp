#include <iostream>

int main()
{
    double number1 {5.6};
    double number2 {}; //Initializes to 0
    double number3 {}; //Initializes to 0

    //Infinity
    double result {number1 / number2};

    std::cout << number1 << " / " << number2 << " = " << result << std::endl;
    std::cout << result << " + " << number1 << " = " << result + number1 << std::endl;

    //NaN
    result = number2 / number3;

    std::cout << number2 << " / " << number3 << " = " << result << std::endl;
}