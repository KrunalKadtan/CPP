#include <iostream>

int main()
{
    // if clause

    int num1 {55};
    int num2 {60};

    bool result = (num1 < num2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    //if (result){
    if(result == true)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    //if (!result) {
    //if (result == false) {
    //if (result != true) {
    if(!(result == true))
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }

    //else clause

    std::cout << std::endl;
    std::cout << "using the else clause : " << std::endl;

    if(result == true)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }

    //Use Expression as condition directly

    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    if(num1 < num2)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }

    std::cout << std::endl;

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    /*
        if green : go
        if red, yellow : stop
        if green & police_stop : stop
    */

    if(red)
    {
        std::cout << "Stop" << std::endl;
    }
    if(yellow)
    {
        std::cout << "Slow Down" << std::endl;
    }
    if(green)
    {
        std::cout << "Go" << std::endl;
    }

    //Nested Conditions

    std::cout << std::endl;
    std::cout << "Police pfficer stops(verbose)" << std::endl;

    if(green)
    {
        if(police_stop)
        {
            std::cout << "Stop" << std::endl;
        }
        else
        {
            std::cout << "Go" << std::endl;
        }
    }

    //Nested Alternative

    std::cout << std::endl;
    std::cout << "Police pfficer stops(less verbose)" << std::endl;

    if(green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}