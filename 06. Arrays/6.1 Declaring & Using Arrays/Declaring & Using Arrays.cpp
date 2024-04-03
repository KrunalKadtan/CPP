#include <iostream>

int main()
{
    //Declaring an Array
    int scores[10];     //An Array storing 10 integers

    //Writing data in an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 24;
    scores[3] = 40;
    scores[4] = 30;
    scores[5] = 26;
    scores[6] = 15;
    scores[7] = 20;
    scores[8] = 22;
    scores[9] = 10;

    //Writing out of bounds. BAD!
    scores[22] = 300;

    //Writing Data in array with loop
    for(size_t i{0}; i<10; i++)
    {
        scores[i] = i * 3;
    }

    //Read Values
    std::cout << "Read out score value (manually) : " << std::endl;

    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "scores[1] : " << scores[1] << std::endl;
    std::cout << "scores[2] : " << scores[2] << std::endl;
    std::cout << "scores[3] : " << scores[3] << std::endl;
    std::cout << "scores[4] : " << scores[4] << std::endl;
    std::cout << "scores[5] : " << scores[5] << std::endl;
    std::cout << "scores[6] : " << scores[6] << std::endl;
    std::cout << "scores[7] : " << scores[7] << std::endl;
    std::cout << "scores[8] : " << scores[8] << std::endl;
    std::cout << "scores[9] : " << scores[9] << std::endl;

    std::cout << "Read out score value (through loop) : " << std::endl;

    for(size_t i{0}; i<10; ++i)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    //Declare & initialize at the same time

    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i<5; i++)
    {
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    // Array Initialization : Omitting Elements

    std::cout << "Leaving out some elements un-initialized : " << std::endl;

    int families[5] {12, 7, 5};
    for(size_t i{0}; i<5; i++)
    {
        std::cout << "families[" << i << "] : " <<  families[i] << std::endl;
    }

    // Array Declaration : Omit Size
    int class_sizes[] {10, 12, 15, 11, 18, 17};
    for(auto value : class_sizes){
        std::cout << "value : " << value << std::endl;
    }

    //Constant Arrays

    const int multipliers[] {22, 30, 15};
    //multipliers[1] = 20; 
    //Can't change elements of a const array : ERROR

    //Operation on data stored in arrays
    int sum {0};

    for(int element : scores){
        sum += element;
    }

    std::cout << "Score sum : " << sum << std::endl;
    return 0;
}