# Ternary Operator

 * This is an alternative way to do tasks with `if` statements.

 * In ternary operator, first we give condition in `( )` & after that add `?` & then (option1) then `:` & then (option2).
 * Syntax :
 ```
 result = (condition) ? option1 : option2 ;
 ```
 * If condition satisfied than it will return `option1` otherwise `option2`.
 * Equivalent if-else :
 ```
 if (condition) {
    result = option1;
 } else {
    result = option2;
 }
 ```
 * Type of `option1` & `option2` must be same OR convertible.
 ```
 result = (a>b) ? a : "b" ;     //ERROR
 ```


 ```
    int max {};

    int a {35};
    int b {20};
    std::cout << "Using Ternary Operator :" << std::endl;

    max = (a>b) ? a : b;

    std::cout << "max = " << max << std::endl;
 ```
 * Here, if `a` is greater than `b` then `max` will get value of `a` otherwise `b`.

 * We can also use Ternary Initialization;
 ```
    std::cout << "Speed" << std::endl;
    bool fast = false;

    int speed {fast ? 300 : 150};

    std::cout << "The Speed is : " << speed <<  std::endl;      //150
 ```