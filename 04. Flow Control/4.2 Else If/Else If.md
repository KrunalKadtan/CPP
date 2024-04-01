# Else If

 * It is use to testing for serval different conditions in 'If Statements'.
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
    //else if clauses

    int tool {ellipse};

    if(tool == pen)
    {
        std::cout << "Active tool is pen" << std::endl;
    }
    else if(tool == marker)
    {
        std::cout << "Active tool is marker" << std::endl;
    }
    else if(tool == eraser)
    {
        std::cout << "Active tool is eraser" << std::endl;
    }
    else if(tool == rectangle)
    {
        std::cout << "Active tool is rectangle" << std::endl;
    }
    else if(tool == circle)
    {
        std::cout << "Active tool is circle" << std::endl;
    }
    else if(tool == ellipse)
    {
        std::cout << "Active tool is ellipse" << std::endl;
    }
 ```
 * If condition of `if` statement is satisfied than the block of code that contain by `if` is executed;
 otherwise it will check condition of `else if` statement below of `if` statement, if it is satisfied than the block of code contain by that `else if` is executed, if it is not satisfied than it will check another `else if` condition & continiue doing this until any one of these condition satified or if none condition is satisfied than it will not execute block of code inside these if-elseif statements.