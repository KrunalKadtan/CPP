#include <iostream>

int main()
{
    int scores[] {10, 12, 15, 11, 18, 17, 22, 23, 24};

    //Can get the size with std::size
    std::cout << "Scores Size : " << std::size(scores) << std::endl;

    //Print Data out
    for(size_t i{0}; i<std::size(scores); i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    std::cout << "size of scores : " << sizeof(scores) << std::endl;
    std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
    std::cout << "scores item count : " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

    size_t count {sizeof(scores) / sizeof(scores[0])};

    std::cout << "Printing out array items : " << std::endl;
    for(size_t i {0}; i<count; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    //Looping through an array

    std::cout << "Using plain old range based for loop " << std::endl;

    for(auto score : scores)
    {
        std::cout << "score : " << score << std::endl;
    }

    return 0;
}