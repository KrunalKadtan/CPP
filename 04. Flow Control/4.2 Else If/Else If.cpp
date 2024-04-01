#include <iostream>

int main()
{
    //Tools
    const int pen {10};
    const int marker {20};
    const int eraser {30};
    const int rectangle {40};
    const int circle {50};
    const int ellipse {60};

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

    return 0;
}