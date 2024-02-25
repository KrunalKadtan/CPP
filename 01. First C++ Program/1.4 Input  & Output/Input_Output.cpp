#include <iostream>

int main()
{
    //std::cout : Printing staff to the console
    std::cout << "Hello World..!" << std::endl;
    std::cout << "The number is : " << 12 << std::endl;

    int age {20};
    std::cout << "The age is : " << age << std::endl;

    //Error
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log message
    std::clog << "std::clog output : This is a log message" << std::endl;

    int Age;
    std::string name;   //this is type of data which store string

    std::cout << "Please type Your Name : " << std::endl;
    std::cin >> name;   //it takes input a name from the console

    std::cout << "Please type Your Age : " << std::endl;
    std::cin >> Age;    //it takes input an age from console

    std::cout << "Please Type Your Name & Age, Separated By Spaces : " << std::endl;
    std::cin >> name >> age;    //input name & age

    std::cout << "Hello " << name << " ! You are " << age << " year old." << std::endl;     //It will print latest Name & Age

    

    return 0;
}