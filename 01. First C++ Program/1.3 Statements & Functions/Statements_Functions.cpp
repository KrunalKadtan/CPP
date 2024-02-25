#include <iostream>

//User-Defined Function

int addNumbers(int number1, int number2)
{
    /*
        Take 2 Numbers as an input
        number1 & number2
    */

    int addition = number1 + number2;

    // It Returns value of "addition" variable
    return addition;
}

int multiplyNumbers(int number1, int number2)
{
    /*
        Take 2 Numbers as an input
        number1 & number2
    */

    int multiplication = number1 * number2;

    // It Returns value of "multiplication" variable
    return multiplication;
}

int main()
{
    int firstNumber = 12;   //We can assign value to a variable as shown
    int secondNumber {9};   //We can assign value to a variable as shown

    int sum = addNumbers(firstNumber, secondNumber);   //It's called Function calling

    /*
        Flow of code goes to function "addNumbers" from "main" function
        addNumbers fuction takes 'firstNumber' (which is 12) & 'secondNumber' (which is 9) as an input & gives its addition 21 as an output to the "sum" variable
        We can give arguments as a variables
    */

    // Here, sum has value = 21 [it's (12 + 9)]

    sum = addNumbers(15, 20);   //It's also Function calling

    /*
        Flow of code goes to function "addNumbers" from "main" function
        addNumbers fuction takes 15 & 20 as an input & gives its addition 35 as an output to the "sum" variable
        We can give arguments as a direct numbers
    */

    // Here, sum has value = 35 [it's (15 + 20)]

    std::cout << "The Sum Of 2 Numbers = " << sum << std::endl;     // It'll print the latest value of "sum" (which is 35) in console

    std::cout << "Sum = " << addNumbers(5, 12) << std::endl;    // It's also Function calling

    //It'll directly print (without storing it into any variable) output in the console

    std::cout << "Multiplication = " << multiplyNumbers(5, 6) << std::endl;     // 30 [it's (5 * 6)]

    return 0;
}