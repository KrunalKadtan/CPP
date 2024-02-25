//Include "iostream" Header File
#include <iostream>

//Initialising main Function
int main()
{
    //Code to be Executed

    //Writing "Hello, World..!" to Console
    std::cout << "Hello, World..!" << std::endl;

    std::cout << "Number1";     //If we don't mention 'std::endl', then cursor doesn't move to new line
    std::cout << "Number2\n";   //Here, I mention '\n', so cursor will move to new line
    std::cout << "Number3" << std::endl;

    /*
        Output :

        Hello, World..!
        Number1Number2
        Number3
    */

    //Exiting main Function
    return 0;
}