# Switch

 * It is use to testing for serval different conditions.
 ```
    //Tools
    const int pen {10};
    const int marker {20};
    const int eraser {30};
    const int rectangle {40};
    const int circle {50};
    const int ellipse {60};
 ```

 ```
    int tool {pen};

    switch(tool)
    {
        case pen :
        {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;

        case marker :
        {
            std::cout << "Active tool is marker" << std::endl;
        }
        break;

        default :
        {
            std::cout << "Can't match any tool" << std::endl;
        }
    }
 ```
 * In switch, we pass the variable that we are basically switching on OR testing the condition on.
 * Inside the block, we testing the each case; if the current tool is pen, we say `case pen :`, and than we put the block of code we want to execute for case of 'pen' in curly braces `{ }`, & than add `break` statement.

 * We can grouped cases.
 ```
    case rectangle :
    case circle :
    case ellipse :
    {
        std::cout << "Drawing Shapes" << std::endl;
    }
    break;
 ```


 ## `break` statement
 
 * This is the statement that tells C++ that after we successfully execute a block of code, we going to jump out of this `switch` statement.
 * If we don't add `break` statement here, than after executing block of code of a particular case, it will execute all block of code of other cases.
 * The `break` statement after each case is very important. It stops processing the switch block when a successful case has been found. If the break statement is not there, all the cases following the current case will be executed.

 ## Condition

 * condition inside `switch` (variable which we are passing in) should be Integral types & enums : int, long, unsigned short, char, etc; it can't be string, etc.