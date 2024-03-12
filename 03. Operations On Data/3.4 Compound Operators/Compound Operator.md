# Compound Operators

 * These operators allow you to do an arithmatic operations & assign the result to a value in one go.

 ```
 int value {45};

 std::cout << "The value is : " << value << std::endl;
 std::cout << std::endl;

 value += 5;
 std::cout << "The value is (after +=5) : " << value << std::endl;
 std::cout << std::endl;

 value -= 5;
 std::cout << "The value is (after -=5) : " << value << std::endl;
 std::cout << std::endl;

 value *= 2;
 std::cout << "The value is (after *=2) : " << value << std::endl;
 std::cout << std::endl;

 value /= 3;
 std::cout << "The value is (after /=3) : " << value << std::endl;
 std::cout << std::endl;

 value %= 10;
 std::cout << "The value is (after %=10) : " << value << std::endl;
 std::cout << std::endl;
 ```

 * Here `value += 5`, It's going to take whatever value is present in the variable 'value', it's going to increment by '5'.
 * Similarly, `-=`, `*=`, `/=` & `%=` works.