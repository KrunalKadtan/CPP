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

    int tool {circle};

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

        case eraser :
        {
            std::cout << "Active tool is marker" << std::endl;
        }
        break;

        case rectangle :
        case circle :
        case ellipse :
        {
            std::cout << "Drawing Shapes" << std::endl;
        }
        break;

        default :
        {
            std::cout << "Can't match any tool" << std::endl;
        }
    }

    return 0;
}