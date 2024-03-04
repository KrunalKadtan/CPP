#include <iostream>

int main()
{
    int number1 {10};
    int number2 {4};

    //Addition
    int sum {number1 + number2};
    int other_sum = number1 + number2 + number1;

    std::cout << "The sum is : " << sum << std::endl;
    std::cout << "Other sum is : " << other_sum << std::endl;

    //Subtraction
    int diff {number1 - number2};
    int other_diff = number1 - number2 - number2;

    std::cout << "The difference is : " << diff << std::endl;
    std::cout << "Other diff is : " << other_diff << std::endl;

    //Multiplication
    int product {number1 * number2};
    int other_product = number1 * 2 * number2;

    std::cout << "The product is : " << product << std::endl;
    std::cout << "Other product is : " << other_product << std::endl;

    //Division
    int quotient {number1 / number2};
    int other_quotient = number1 / 17;

    std::cout << "The quotient is : " << quotient << std::endl;
    std::cout << "Other quotient is : " << other_quotient << std::endl;

    int remainder {number1 % number2};
    int other_remainder {number1 % 6};

    std::cout << "Remainder : " << remainder << std::endl;
    std::cout << "Other remainder : " << other_remainder << std::endl;
}