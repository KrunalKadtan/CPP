#include <iostream>

int main()
{
    //Scientific Notation
    double number1 {192400023};
    double number2 {1.92400023e8};
    double number3 {1.924e8};

    //number1 & number2 & number3 is equal
    
    double number4 {0.00000000003498};
    double number5 {3.498e-11};

    //number4 & number5 is equal

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;
    std::cout << "number5 : " << number5 << std::endl;
}