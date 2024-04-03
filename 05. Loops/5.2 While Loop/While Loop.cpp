#include <iostream>

int main()
{
    const unsigned int COUNT {10};

    unsigned int i {0};

    while (i < COUNT)
    {
        std::cout << "Hello, World..!" << std::endl;
        ++i;
    }
    return 0;
}