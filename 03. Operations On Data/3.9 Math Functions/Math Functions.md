# Math Functions (`#include <cmath>`)

 * **floor :** It round down the number
 * **ceil :** It round up the number
 ```
 double weight {7.7};

 std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl; //7

 std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl; //8
 ```

 * **abs :** It gives the absolute value of the number {|x| --> Modulus Function}
 ```
 double saving {-5000};
 weight = 7.7;

 std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;

 std::cout << "Abs of saving is : " << std::abs(saving) << std::endl;
 ```

 * **exp :** It gives exponential value
   * exp : f(x) = e^x, where e = 2.71828
 ```
 double exponential = std::exp(10);

 std::cout << "The exponential of 10 is : " << exponential << std::endl;
 ```

 * **pow :** It takes 1st parameter & raised its power to 2nd parameter.
   * pow(a, b) = a^b;
 ```
 std::cout << "3^4 is : " << std::pow(3, 4) << std::endl;
 std::cout << "9^3 is : " << std::pow(9, 3) << std::endl;
 ``` 

 * **log :** It's reverse function of pow.
   * If 2^3 = 8, log 8 in base 2 = 3
   * Log is like asking to which exponent should we elevate 2 to get 8 ?
   * Log by default computes the log in base **e**.
   * There also is another function which uses base 10 called **log10**.

 ```
 std::cout << "Log; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

 std::cout << "To get 1000, you'd need to elavate 10 to the power of : " << std::log10(1000) << std::endl;
 ```

 * **sqrt :** This elavate square root of number.
 * **round :** Halfway points are rounded away from 0.

 ```
 std::cout << "The Square root of 81 is : " << std::sqrt(81) << std::endl;

 std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
 std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
 std::cout << "2.4 rounded to : " << std::round(2.4) << std::endl;
 ```

#

For Reference : https://en.cppreference.com/w/cpp/header/cmath