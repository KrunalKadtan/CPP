#include <iostream>

int main()
{
    int apple_count(5);

    int orange_count(10);

    int fruit_count (apple_count + orange_count);

    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    //Information lost, less safe than braced initializers
    int narrowing_conversion_functional (2.9);

    std::cout << "apple_count = " << apple_count << std::endl;
    std::cout << "orange_count = " << orange_count << std::endl;
    std::cout << "fruit_count = " << fruit_count << std::endl;
    std::cout << "narrowing_conversion = " << narrowing_conversion_functional << std::endl;
}