# Characters

 * We use data type **char** to represent characters.
 ```
 char character1 {'a'};
 char character2 {'r'};
 char character3 {'r'};
 char character4 {'o'};
 char character5 {'w'};
 ``` 
 * Here, we store `a`, `r`, `r`, `o`, `w`; we have to put our character in single qoute (`' '`) to mean that they are characters.

 * `char` occupies **1 Byes** (8 bits) in memory.

 1 byte : 256 Possible Values --> Each matched to some character [$2^8$ = 256 different values (0 ~ 255)]

 * It is possible to assign a valid ASCII code to a char variable, & the corresponding character will be stored in. You can choose to interpret that either as a character or a regular integral value.

 ```
 char value = 65; //ASCII character code for 'A'
 std::cout << "value : " << value << std::endl; // A
 ```