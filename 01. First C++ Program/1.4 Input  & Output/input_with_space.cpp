#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "Enter Your Full Name & Age : ";
    std::getline(std::cin, name);
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " year old." << std::endl;
}