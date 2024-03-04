#include <iostream>

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e - f + g;

    /*
        6 + 3 * 8 - 9 / 3 - 2 + 5
        6 + (3 * 8) - (9 / 3) - 2 + 5
        (6 + 24) - 3 - 2 + 5
        30 - 5 + 5
        30
    */

    std::cout << "result : " << result << std::endl;

    result = a / b * c + d - e + f;

    /*
        6 / 3 * 8 + 9 - 3 + 2
        (6 / 3) * 8 + 9 - 3 + 2
        (2 * 8) + 9 - 3 + 2
        16 + 9 - 3 + 2
        25 - 1
        24
    */

    std::cout << "result : " << result << std::endl;

}