#include <iostream>
#include <cmath>

int main()
{
    double weight {7.7};

    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl; //7

    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl; //8

    double saving {-5000};

    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;

    std::cout << "Abs of saving is : " << std::abs(saving) << std::endl;

    double exponential = std::exp(10);
 
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    std::cout << "3^4 is : " << std::pow(3, 4) << std::endl;

    std::cout << "9^3 is : " << std::pow(9, 3) << std::endl;

    std::cout << "Log; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

    std::cout << "To get 1000, you'd need to elavate 10 to the power of : " << std::log10(1000) << std::endl;

    std::cout << "The Square root of 81 is : " << std::sqrt(81) << std::endl;

    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded to : " << std::round(2.4) << std::endl;

    return 0;
}