## #include
 
 * #include statement is use to include different types of header files into our program.
 
 * **Some examples of standard header files include :**

 * * `iostream` - Provides declarations for input/output operations
 * * `string` - Provides declarations for working with strings
 * * `vector` - Provides declarations for working with dynamic arrays
 * * `cmath` - Provides declarations for mathematical functions
 * * `cstdlib` - Provides declarations for general-purpose functions such as memory allocation and dynamic memory allocation

 * Here, It's use to include `iostream` header file.    (standard input-output stream)
 * The iostream header file in C++ contains functions for performing input and output operations.

 * **Here are some of the most commonly used functions in `iostream` :**

 * * **cin :** This function is used to read data from the keyboard.
 * * **cout :** This function is used to write data to the console.
 * * **endl :** This function inserts a newline character into the output stream.
 * * **getline() :** This function reads a line of text from the keyboard.  (used to read string from keyboard)
 * * **ifstream :** This class is used to open and read files.
 * * **ofstream :** This class is used to open and write files.

## std::cout << "Hello, World..!" << std::endl;
 
 * **std::cout :**
 * * This is output stream object used to display output to the console.
 * * **cout** is a object from `std` namesapce.

 * **<< :**
 * * This is the insertion operator, which is used to insert **Hello, World..!** string into `cout` object.

 * **std::endl :**
 * * This is used to insert a new line character & flush the output buffer & move cursor to the  next line after printing "Hello, World..!".
 * * We can also use `\n` for new line character.

## return 0;

 * `return` statement ends the **main()** function & return exit status of 0 to OS, indicating successful execution.

## Comments

 * There are 2 types of Comments : 
  1. Single Line Comments
  2. Multi-Line Comments

 * Single Line Comments are initialise by `//`.

 * Multi-Line Comments are written inside `/* ... */`.
 * We cannot use nested comments in Multi-Line Comments.
 ```
 /* ...
    ...
        /* ...
            ...
        */
    ...
  */
  ```
  * This is not allowed..!