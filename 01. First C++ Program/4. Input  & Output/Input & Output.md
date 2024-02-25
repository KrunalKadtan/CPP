## Input-Output

 * Our C++ Program take input from the console & give output to the console.

 * Previously, We use `std::cout` which is use to print something to the console.
 * Basically, It takes input from the program (whatever we want to print, we have to write it there), if you notice that we mention `<<` this after writting **std::cout** & before writting 'Anything we want to print', `<<` this indicate that whatever we write `std::cout` takes it as an input & gives its output to the console by printing it there.
 * `std::cout` is the one way we have to get data from our program to console, there are many others;
 
| stream | Purpose |
| --- | ---|
| `std::cout` | Printing data to the console (terminal) |
| `std::cin` | Reading data from the terminal |
| `std::cerr` | Printing errors to the console |
| `std::clog` | Printing log messages to the console |

## Printing Data

 * All the 4 streams mentioned above is work similarly as **std::cout** works.
 ```
 std::cout << "Hello World..!" << std::endl;
 std::cout << "The number is : " << 12 << std::endl;

 int age {20};
 std::cout << "The age is : " << age << std::endl;

 std::cerr << "std::cerr output : Something went wrong" << std::endl;

 std::clog << "std::clog output : This is a log message" << std::endl;
 ```
 * Here, Each streams take input from the program and gives output to the console.

## Reading Data 

 * For reading data from console, we generally use `std::cin`.
 * It takes input from console & gives output to that variable we mentioned in out program.
 ```
 std::string name;

 std::cout << "Please type Your Name : " << std::endl;
 std::cin >> name;
 ```
 * If you notice that we mention `>>` this after writting **std::cin** & before writting 'name of variable' (in which we want to store data), `>>` this indicate that whatever we give input through console, `std::cout` takes it as an input & gives its output as storing that data into that variable which named we mention.

 * If user input data with space than, we got a problem. `std::cin` don't take "space" as an input.
 * So, in that case, we can use `std::getline`.
 * Syntax : `std::getline(std::cin, variable_name);`
 * **std::getline** can take an input a string which is containing spaces.