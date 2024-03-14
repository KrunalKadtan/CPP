#include <iostream>

int main()
{
    int d {45};
    int e {20};
    int f {11};

    std::cout << "Relational & Logical Operations on Integers :" << std::endl;
    std::cout << "d : " << d << std::endl; //45
    std::cout << "e : " << e << std::endl; //20
    std::cout << "f : " << f << std::endl; //11

    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; //true
    std::cout << "(d == e) || (e <= f) : " << ((d == e) || (e <= f)) << std::endl; //false
    std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl; //true
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl; //false
    std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl; //true
    std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl; //false
    std::cout << "(! f) && (d == e) : " << ((! f) && (d == e)) << std::endl; //false
    std::cout << "(! e) && (d == f) : " << ((! e) && (d == f)) << std::endl; //false

    return 0;
}