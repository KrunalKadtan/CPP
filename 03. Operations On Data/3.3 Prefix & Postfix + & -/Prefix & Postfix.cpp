# include <iostream>

int main()
{

    // Regular Increment/Decrement

    int value {5};

    //Increment by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl;  //6

    value = 5;     //Reset value to 5

    //Decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;  //4


    // Postfix Increment/Decrement

    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
    std::cout << "The value is : " << value << std::endl; //6

    std::cout << std::endl;

    //Decrement with postfix

    value = 5;      //Reset value to 5

    std::cout << "The value is (decrementing) : " << value-- << std::endl; //5
    std::cout << "The value is : " << value << std::endl; //4


    // Prefix Increment/Decrement

    value = 5;

    ++value;
    std::cout << "The value is (prefix ++) : " << value << std::endl; //6

    value = 5;      //Reset value to 5
    std::cout << "The value is (prefix ++ in place) : " << ++value << std::endl; //6

    std::cout << std::endl;

    //Prefix : Decrementing

    value = 5;     // Reset value to 5;
    --value;
    std::cout << "The value is (prefix --) : " << value << std::endl; //4

    value = 5;      //Reset value to 5
    std::cout << "The value is (prefix -- in place) : " << --value << std::endl; //4
    
    return 0;
}