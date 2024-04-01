# If Statement

 * This is the statement, that is going to allow you to do things based on some condition being true or false.

 ```
    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    /*
        if green : go
        if red, yellow : stop
        if green & police_stop : stop
    */

    if(red)
    {
        std::cout << "Stop" << std::endl;
    }
    if(yellow)
    {
        std::cout << "Slow Down" << std::endl;
    }
    if(green)
    {
        std::cout << "Go" << std::endl;
    }
 ```

 ```
    int num1 {55};
    int num2 {60};

    bool result = (num1 < num2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    //if (result)
    if(result == true)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    //if (!result)
    //if (result == false)
    //if (result != true)
    if(!(result == true))
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }
 ```
 * If condition of `if` statement is satisfied than the block of code that contain by `if` is executed.

 ```
    if(result == true)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }
 ```
 * If condition of `if` statement is satisfied than the block of code that contain by `if` is executed, otherwise the block of code that contain by `else` is executed.

 ```
    if(num1 < num2)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is NOT less than " << num2 << std::endl;
    }
 ```
 * We can also you directly expression as a condition.

 ```
    if(green)
    {
        if(police_stop)
        {
            std:cout << "Stop" << std::endl;
        }
        else
        {
            std::cout << "Go" << std::endl;
        }
    }
 ```
 * We can also nest conditions; for example, check **condition1**, if it's true than check **condition2**, if it satisfied than execute the block of code.

 ```
    if(condition_1)
    {
        if(condition_2)
        {
            Block_Of_Code_1;
        }
        else
        {
            Block_Of_Code_2;
        }
    }
    else
    {
        Block_Of_Code_3;
    }
 ```
 * If `condition_1` is true than it will check `condition_2`, if it is true than it will execute `Block_Of_Code_1`, if `condition_2` is false than it will execute `Block_Of_Code_2`, If `condition_1` is false than it will execute `Block_Of_Code_3`. 

 * We can also use logiccal operators.
 ```
    if(green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }
 ```