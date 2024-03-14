#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "--------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    std::cout << "Unformatted Table :" << std::endl;
    std::cout << "Krunal" << " " << "Kadtan" << " " << "19" << std::endl;
    std::cout << "Dev" << " " << "Khatri" << " " << "17" << std::endl;
    std::cout << "Ayush" << " " << "Modi" << " " << "19" << std::endl;
    std::cout << "Yagnesh" << " " << "Patil" << " " << "22" << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    std::cout << "Formatted Table :" << std::endl;

    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Krunal" << std::setw(10) << "Kadtan" << std::setw(5) << "19" << std::endl;
    std::cout << std::setw(10) << "Dev" << std::setw(10) << "Khatri" << std::setw(5) << "17" << std::endl;
    std::cout << std::setw(10) << "Ayush" << std::setw(10) << "Modi" << std::setw(5) << "19" << std::endl;
    std::cout << std::setw(10) << "Yagnesh" << std::setw(10) << "Patil" << std::setw(5) << "22" << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    std::cout << "Formatted Table :" << std::endl;

    std::cout << std::left;

    std::cout << std::setw(25) << "Firstname" << std::setw(25) << "Lastname" << std::setw(15) << "Age" << std::endl;
    
    std::cout << std::right;

    std::cout << std::setw(25) << "Krunal" << std::setw(25) << "Kadtan" << std::setw(15) << "19" << std::endl;
    std::cout << std::setw(25) << "Dev" << std::setw(25) << "Khatri" << std::setw(15) << "17" << std::endl;

    std::cout << std::left;

    std::cout << std::setw(25) << "Ayush" << std::setw(25) << "Modi" << std::setw(15) << "19" << std::endl;
    std::cout << std::setw(25) << "Yagnesh" << std::setw(25) << "Patil" << std::setw(15) << "22" << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    std::cout << "Internal Justified :" << std::endl;

    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    int col_width = 20;

    std::cout << std::left;
    std::cout << std::setfill('.');
  
    std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Krunal" << std::setw(col_width) << "Kadtan" << std::setw(col_width) << "19" << std::endl;
    std::cout << std::setw(col_width) << "Dev" << std::setw(col_width) << "Khatri" << std::setw(col_width) << "17" << std::endl;
    std::cout << std::setw(col_width) << "Ayush" << std::setw(col_width) << "Modi" << std::setw(col_width) << "19" << std::endl;
    std::cout << std::setw(col_width) << "Yagnesh" << std::setw(col_width) << "Patil" << std::setw(col_width) << "22" << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    bool condition {true};
    bool other_condition {false};

    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "pos_int in different bases :" << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
  
    std::cout << std::endl;
    std::cout << "neg_int in different bases :" << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases :" << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    pos_int = 717171;

    std::cout << "pos_int (noshowbase : default) :" << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << "pos_int (showbase) :" << std::endl;
    std::cout << std::showbase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    pos_int = 717171;

    std::cout << "pos_int (nouppercase : default) :" << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << "pos_int (uppercase) :" << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::nouppercase << std::dec;


    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) :" << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) :" << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) :" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    long double num = 3.1415926535897932384626433832795;

    std::cout << std::endl;
    std::cout << "num (default precision(6)) : " << num << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "num (precision(10)) : " << num << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "num (precision(20)) : " << num << std::endl;
    std::cout << std::setprecision(50);
    std::cout << "num (precision(50)) : " << num << std::endl;

    //Reset precision to 6
    std::cout << std::setprecision(6);

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {50};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) :" << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint :" << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;

    std::cout << "------------------------------" << std::endl;

    return 0;
}