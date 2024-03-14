#include <iostream>

int main()
{
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;

    std::cout << "Basic AND Operations :" << std::endl;

    std::cout << "a && b : " << (a && b) << std::endl; //false
    std::cout << "a && c : " << (a && c) << std::endl; //true
    std::cout << "a && b && c : " << (a && b && c) << std::endl; //false

    std::cout << std::endl;

    std::cout << "Basic OR Operations :" << std::endl;

    std::cout << "a || b : " << (a || b) << std::endl; //true
    std::cout << "a || c : " << (a || c) << std::endl; //true
    std::cout << "a || b || c : " << (a || b || c) << std::endl; //true

    std::cout << std::endl;

    std::cout << "Basic NOT Operations :" << std::endl;

    std::cout << "!a : " << !a << std::endl; //false
    std::cout << "!b : " << !b << std::endl; //true
    std::cout << "!c : " << !c << std::endl; //false

    // Combine Logical Operators in Expression

    std::cout << std::endl;

    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;

    return 0;
}