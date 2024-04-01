# Weird Integral Types

 * Integral Types less than 4 bytes in size don't support Arithmetic Operations. Ex; `char` (1 byte), `short int` (2 byte)
 * We can't do arithmetic operations, if our integer value is store in this types.

 * If we trying to do arithmetic operations on this types, our compiler implicitly convert it from this smaller types to `int`.

 ```
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "Size of var1 : " << sizeof(var1) << std::endl;    //2
    std::cout << "Size of var2 : " << sizeof(var2) << std::endl;    //2
    std::cout << "Size of var3 : " << sizeof(var3) << std::endl;    //1
    std::cout << "Size of var4 : " << sizeof(var4) << std::endl;    //1

    auto result1 = var1 + var2;     // Convertion to int
    auto result2 = var3 + var4;     // Convertion to int

    std::cout << "Size of result1 : " << sizeof(result1) << std::endl;      //4
    std::cout << "Size of result2 : " << sizeof(result2) << std::endl;      //4
 ```

 * If we try to add them (`var1 + var2` OR `var3 + var4`) up, the result is not going to be same type as the things we added up & we expect 'auto' to deduce the same type as **var1** & **var2**, but it's not, result will be **int**, because 'int' is the smallest type for which we can support this arithmetic operations.

 * If we print size of **result1** & **result2**, we are going to get '4' as it will be 'int'.

 * The same behavior is present on other operators like **bitwise shift operators (`>>` and `<<`)**.