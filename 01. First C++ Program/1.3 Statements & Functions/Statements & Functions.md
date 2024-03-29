## Statements

 * A Statement is a basic unit of computation in a C++ program.
 * Every C++ program is a collection of statements organized in a certain way to achieve some goal.
 * Statements end with a **semicolon** `;` in C++.

 * In Below Code,
 ```
 int main()
 {
    int firstNumber = 12;
    int secondNumber = 9;
    int sum = firstNumber + secondNumber;

    std::cout << "The Sum Of 2 Numbers = " << sum << std::endl;

    return 0;
 }
 ```

 * * Here, Each line is a statement which is end with `;`.
 * * Each  line is present into a `main` function.

 * Statements are executed in order from top to bottom when the program is run.
 * Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.

 ## Functions

 * Function is like a machine, we give it an input & it gives us an output.
 * In previous example, `firstNumber` & `secondNumber` are the input of **main function** & `sum` is output of **main function**.

 * C++ has a special syntax to use to define a function.
 * Syntax is as follow,
 ```
 return_type function_name (parameters)
 {
    //Function Body
    //Code To Perform The Task

    return value;
 }
 ```
 
 * A function must be defined before it's use.
 * Function for adding 2 numbers as per pervious example is below,
 ```
 int addNumbers(int first_number, int second_number)
 {
    int addition = first_number + second_number;
    return addition;
 }
 ```

 * We use user-defined function to use same block of code multiple times (perform same task multiple times without writing same code again & again).
