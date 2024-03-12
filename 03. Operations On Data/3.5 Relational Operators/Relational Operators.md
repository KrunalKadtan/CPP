# Relational Operators

 * These are the basic operators which are used to compare stuff.
 * We can use `<`, `<=`, `>`, `>=`, `==`, `!=` for comparing.
 * These comparision operators evalutes to booleans, they are going to return `true` or `false`.

 ```
 int number1 {45};
 int number2 {60};

 std::cout << "number1 : " << number1 << std::endl;
 std::cout << "number2 : " << number2 << std::endl;
 std::cout << std::endl;

 std::cout << std::boolalpha;

 std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
 std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
 std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
 std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
 std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
 std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;
 ```

 * We can check that if two numbers are equal or not by using `==`, if you use only one equal sign `=` then you're not comparing it but you assign a value from right to left.
 * We are writing our comparision expression into `( )`, that's because if we don't then we get a weird compiler ERROR like below,
 ```
 error : invalid operands of types 'int' and '<unresolved overloaded function type>' to binary 'operator<<'
   std::cout << "number1 < number2 : " << number1 < number2 << std::endl;
 ```

 * We can store the result of these operators in a variable.
 ```
 bool result = (number1 == number2);
 std::cout << number1 << " == " << number2 << " : " << result << std::endl;
 ```