#include <iostream>

int main()
{
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "Size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "Size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "Size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "Size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "Size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "Size of result2 : " << sizeof(result2) << std::endl;

    return 0;
}