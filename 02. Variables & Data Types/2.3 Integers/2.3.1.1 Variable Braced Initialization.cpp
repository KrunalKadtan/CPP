#include <iostream>

int main()
{
    //Variable may contain random garbage value. WARNING
    int elephant_count;
 
    int lion_count {}; //Initializes to zero

    int dog_count {10}; //Initializes to 10

    int cat_count {15}; //Initializes to 15

    //Can use expression as Initializer
    int domesticated_animals { dog_count + cat_count };

    // Won't compile, the expression in the braces uses undeclared variables
    //int bad_initialization { doesnt_exist1 + doesnt_exist2 };

    // 2.9 is of type double, with a wider range than int. ERROR OR WARNING
    //int narrowing_conversion {2.9};

    std::cout << "elephant_count = " << elephant_count << std::endl;
    std::cout << "lion_count = " << lion_count << std::endl;
    std::cout << "dog_count = " << dog_count << std::endl;
    std::cout << "cat_count = " << cat_count << std::endl;
    std::cout << "domesticated_animals = " << domesticated_animals << std::endl;
}