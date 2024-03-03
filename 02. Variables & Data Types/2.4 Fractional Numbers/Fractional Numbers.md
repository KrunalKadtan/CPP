* Fractional Numbers also known as Floating Point Type in technical terms, Used to represent numbers with fractional parts.

| Type | Size | Precision |
|---|---|---|
| float | 4 | 7 |
| double | 8 | 15 |
| long double | 16 | > double |

Precision --> It's basically the numbers of bits you can represent with that type.
 * 1.23456700001 ---> Here, Precision = 12, that means we can't store this number into `float`, we should store it in `double`. Here `1` before `.` is also count in precision.

```
float number1 {1.12345678901234567890f};
double number2 {1.12345678901234567890};
long double number3 {1.12345678901234567890L};
```

```
std::cout << std::setprecision(20);     //Control the precision from std::cout
std::cout << "number1 : " << number1 << std::endl;  //7 digits
std::cout << "number2 : " << number2 << std::endl;  //15'ish digits
std::cout << "number3 : " << number3 << std::endl;  // 15+ digits
```

* We can use **Scientific Notation** with floating point value.
```
//Scientific Notation
double number1 {192400023};
double number2 {1.992400023e8};
double number3 {1.924e8};
double number4 {0.00000000003498};
double number5 {3.498e-11};
```

n (floating point) / 0 ---> Infinity (+/-)

0.0 / 0.0 ---> NaN

* Remember the suffixes when initializing floating point variables, otherwise the default will be double. [As we do in 2.4.1 (number1 & number3 --> suffix `f` & `L`)]
* Double works well in many situations.