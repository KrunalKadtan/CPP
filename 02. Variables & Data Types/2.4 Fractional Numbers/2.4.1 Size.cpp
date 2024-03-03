#include <iostream>
#include <iomanip>

int main()
{
    //Declare & initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20);
    std::cout << "number1 : " << number1 << std::endl; 
    std::cout << "number2 : " << number2 << std::endl; 
    std::cout << "number3 : " << number3 << std::endl; 

    //Precision gone wrong
    float number4 {192400023.0};   //ERROR : Narrowing Conversion
    number4 = number4 + 1;
    std::cout << "number4 : " << number4 << std::endl;
}