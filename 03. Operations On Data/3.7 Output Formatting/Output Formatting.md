# Output Formatting

 * We will use 2 libraries :
   1. `#include <ios>`
   2. `#include <iomanip>`

 ## `std::endl`
  
  * We used it to print out a 'new-line character'.
  * We can also use `\n` instead of `std::endl` to print out  'new-line character'.
  * `std::endl` & `\n` are do the same thing.

  ```
  std::cout << "Hello";
  std::cout << "World";

  std::cout << std::endl;

  std::cout << "--------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";
  ```

 ## `std::flush`

  * This causes immediate sending of data to the device connected to the stream.
  * Means, This is going to send whatever is in the output buffer to the terminal.

  * Suppose we have `std::cout` & we want to print **"Hello World, How are you..?"**, `std::cout` isn't directly send this data to the terminal, the data firstly goto intermediary buffer (some kind of storage in which data goes before it goes to the terminal).
  * When the buffer is full then data is going to be send to the terminal in one go.

  * If you want the data go to terminal directly, you have to add `std::flush` after your `std::cout` statement.

 ## `std::setw()`

  * It specifies the width for whatever text you want to print.

  ```
  std::cout << "Unformatted Table :" << std::endl;
  std::cout << "Krunal" << " " << "Kadtan" << "19" << std::endl;
  std::cout << "Dev" << " " << "Khatri" << "17" << std::endl;
  std::cout << "Ayush" << " " << "Modi" << "19" << std::endl;
  std::cout << "Yagnesh" << " " << "Patil" << "22" << std::endl;

  std::cout << std::endl;

  std::cout << "Formatted Table :" << std::endl;

  std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
  std::cout << std::setw(10) << "Krunal" << std::setw(10) << "Kadtan" << std::setw(5) << "19" << std::endl;
  std::cout << std::setw(10) << "Dev" << std::setw(10) << "Khatri" << std::setw(5) << "17" << std::endl;
  std::cout << std::setw(10) << "Ayush" << std::setw(10) << "Modi" << std::setw(5) << "19" << std::endl;
  std::cout << std::setw(10) << "Yagnesh" << std::setw(10) << "Patil" << std::setw(5) << "22" << std::endl;
  ```

 ## Right Justification
  
  * We can choose whether we want our text to the right or to the left in given width using `std::rignt` or `std::left`.

  ```
  std::cout << "Formatted Table :" << std::endl;
  std::cout << std::right;
  std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
  std::cout << std::setw(10) << "Krunal" << std::setw(10) << "Kadtan" << std::setw(5) << "19" << std::endl;
  std::cout << std::setw(10) << "Dev" << std::setw(10) << "Khatri" << std::setw(5) << "17" << std::endl;
  std::cout << std::left;
  std::cout << std::setw(10) << "Ayush" << std::setw(10) << "Modi" << std::setw(5) << "19" << std::endl;
  std::cout << std::setw(10) << "Yagnesh" << std::setw(10) << "Patil" << std::setw(5) << "22" << std::endl;
  ```

 ## Internal Justification

  * By using Internal Justification, we can print sign at left side & data in right side.

  ```
  std::cout << "Internal Justified :" << std::endl;

  std::cout << std::right;
  std::cout << std::setw(10) << -123.45 << std::endl;
  std::cout << std::internal;
  std::cout << std::setw(10) << -123.45 << std::endl;
  ```

 ## `std::setfill`

  * We can use it, for filling our empty sapces by any character.

  ```
  col_width = 20;

  std::cout << std::left;
  std::cout << std::setfill('.');
  
  std::cout << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Age" << std::endl;
  std::cout << std::setw(col_width) << "Krunal" << std::setw(col_width) << "Kadtan" << std::setw(col_width) << "19" << std::endl;
  std::cout << std::setw(col_width) << "Dev" << std::setw(col_width) << "Khatri" << std::setw(col_width) << "17" << std::endl;
  std::cout << std::setw(col_width) << "Ayush" << std::setw(col_width) << "Modi" << std::setw(col_width) << "19" << std::endl;
  std::cout << std::setw(col_width) << "Yagnesh" << std::setw(col_width) << "Patil" << std::setw(col_width) << "22" << std::endl;
  ```

 ## `std::boolalpha`

  * It controls the boolean output.
  * It force `std::cout` to print `true` or `false` instead of `1` or `0`.

  ```
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
  ```

 ## `std::showpos`

 * It is used to show positive sign for positive numbers.

 ```
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
 ```

 ## `std::dec`, `std::oct` & `std::hex`

  * This is used to show numbers into different number system.

  ```
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
  ```

  * It will not show any effect on floating-point value.

 ## `std::showbase`

  * It is used to show the base for integral types

  ```
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
  ```

 ## `std::uppercase`

  * It is used to show uppercase while showing base of base of number.

  ```
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
  ```

 ## `std::scientific` & `std::fixed`

  * It is control the floating-point data, how to shown on the terminal.

  ```
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
  ```

 ## `std::setprecision`

  * It is used to set number of digits printed out for a floating-point number.

  ```
  long double a = 3.1415926535897932384626433832795;

  std::cout << std::endl;
  std::cout << "a (default precision(6)) : " << a << std::endl;
  std::cout << std::setprecision(10);
  std::cout << "a (precision(10)) : " << a << std::endl;
  std::cout << std::setprecision(20);
  std::cout << "a (precision(20)) : " << a << std::endl;
  std::cout << std::setprecision(50);
  std::cout << "a (precision(50)) : " << a << std::endl;

  //Reset precision to 6
  std::cout << std::setprecision(6);
  ```

 ## `std::showpoint`

  * It used to show trailing zeros if necessary.

  ```
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
  ```

| Manipulators(s) | Header | Purpose |
|---|---|---|
| `std::endl` | `<ostream>` | Insert new line character |
| `std::flush` | `<ostream>` | Flush the output stream |
| `std::setw()` | `<iomainp>` | Change the width of the next input/output field |
| `std::left`, `std::right`, `std::internal` | `<ios>` | Value Justification |
| `std::boolalpha` & `std::noboolalpha` | `<ios>` | Bool Output Format |
| `std::showpos` & `std::noshowpos` | `<ios>` | Show + sign for Positive numbers |
| `std::dec`, `std::hex` & `std::oct` | `<ios>` | Control the default number system |
| `std::showbase` & `std::noshowbase` | `<ios>` | Include prefix to show base |
| `std::uppercase` & `std::nouppercase` | `<ios>` | Show prefix for digits in uppercase |
| `std::fixed` & `std::scientific` | `<ios>` | Control floating point output formate |
| `std::setprecision()` | `<iomanip>` | Numbers of digits used to represent a floating point type |
| `std::setfill()` | `<iomanip>` | Change the fill character |
|`std::showpoint` & `std::noshowpoint` | `<ios>` | Control whether trailing zeros are shown |