#include <iostream>

int main()
{
    int max {};

    int a {35};
    int b {20};

    std::cout << std::endl;
    std::cout << "Using Regular if :" << std::endl;

    if(a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    std::cout << "max = " << max << std::endl;

    std::cout << std::endl;
    std::cout << "Using Ternary Operator :" << std::endl;

    max = (a>b) ? a : b;

    std::cout << "max = " << max << std::endl;

    //Ternary Initialization
    std::cout << std::endl;
    std::cout << "Speed" << std::endl;
    bool fast = false;

    int speed {fast ? 300 : 150};

    std::cout << "The Speed is : " << speed <<  std::endl;

    return 0;
}