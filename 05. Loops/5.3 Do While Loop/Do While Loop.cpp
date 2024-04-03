#include <iostream>

int main()
{
    const unsigned int COUNT {10};

    unsigned int i {0};

    do
    {
        std::cout << "[" << i << "] : Hello, World..!" << std::endl;
        ++i;
    } while (i < COUNT);
    
    return 0;
}