#include <iostream>

int main()
{
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "value1 = " << value1 << "; size :" << sizeof(value1) << std::endl;
    std::cout << "value2 = " << value2 << "; size :" << sizeof(value2) << std::endl;

    short short_var {-32768};   // 2 Bytes
    short int short_int {455};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    std::cout << "short_var = " << short_var << "; size :" << sizeof(short_var) << std::endl;
    std::cout << "short_int = " << short_int << "; size :" << sizeof(short_int) << std::endl;
    std::cout << "signed_short_int = " << signed_short_int << "; size :" << sizeof(signed_short_int) << std::endl;
    std::cout << "unsigned_short_int = " << unsigned_short_int << "; size :" << sizeof(unsigned_short_int) << std::endl;

    int int_var {55};   // 4 Bytes
    signed signed_var {66}; 
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    std::cout << "int_var = " << int_var << "; size :" << sizeof(int_var) << std::endl;
    std::cout << "signed_var = " << signed_var << "; size :" << sizeof(signed_var) << std::endl;
    std::cout << "signed_int = " << signed_int << "; size :" << sizeof(signed_int) << std::endl;
    std::cout << "unsigned_int = " << unsigned_int << "; size :" << sizeof(unsigned_int) << std::endl;

    long long_var {88};     // 4 or 8 Bytes
    long int long_int {33}; 
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    std::cout << "long_var = " << long_var << "; size :" << sizeof(long_var) << std::endl;
    std::cout << "long_int = " << long_int << "; size :" << sizeof(long_int) << std::endl;
    std::cout << "signed_long = " << signed_long << "; size :" << sizeof(signed_long) << std::endl;
    std::cout << "signed_long_int = " << signed_long_int << "; size :" << sizeof(signed_long_int) << std::endl;
    std::cout << "unsigned_long_int = " << unsigned_long_int << "; size :" << sizeof(unsigned_long_int) << std::endl;

    long long long_long {888};  // 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << "long_long = " << long_long << "; size :" << sizeof(long_long) << std::endl;
    std::cout << "long_long_int = " << long_long_int << "; size :" << sizeof(long_long_int) << std::endl;
    std::cout << "signed_long_long = " << signed_long_long << "; size :" << sizeof(signed_long_long) << std::endl;
    std::cout << "signed_long_long_int = " << signed_long_long_int << "; size :" << sizeof(signed_long_long_int) << std::endl;
    std::cout << "unsigned_long_long_int = " << unsigned_long_long_int << "; size :" << sizeof(unsigned_long_long_int) << std::endl;
}