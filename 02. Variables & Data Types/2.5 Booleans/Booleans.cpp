#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light {false};

    if(red_light == true)
    {
        std::cout << "Stop..!" << std::endl;
    }
    else
    {
        std::cout << "Go through..!" << std::endl;
    }

    if(green_light)     // It by default conside (green_light == true)
    {
        std::cout << "The light is green..!" << std::endl;
    }
    else
    {
        std::cout << "The light is NOT green ..!" << std::endl;
    }

    //Printing out a bool
    // 1 -->> true
    // 0 -->> false

    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    //Print out true & false
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
}