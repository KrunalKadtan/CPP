#include <iostream>

int main()
{
    auto var1 {12};    //integer
    auto var2 {13.0};  //double
    auto var3 {14.0f}; //float
    auto var4 {15.0l}; //long double
    auto var5 {'e'};   //character

    //int modifier suffixes
    auto var6 {123u};  //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ll}; //long long

    std::cout << "var1 size : " << sizeof(var1) << std::endl;
    std::cout << "var2 size : " << sizeof(var2) << std::endl;
    std::cout << "var3 size : " << sizeof(var3) << std::endl;
    std::cout << "var4 size : " << sizeof(var4) << std::endl;
    std::cout << "var5 size : " << sizeof(var5) << std::endl;
    std::cout << "var6 size : " << sizeof(var6) << std::endl;
    std::cout << "var7 size : " << sizeof(var7) << std::endl;
    std::cout << "var8 size : " << sizeof(var8) << std::endl;
}