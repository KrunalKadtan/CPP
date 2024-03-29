## Compile Time Errors

 * Here is a basic C++ code,
 ```
 #include <iostream>
 int main()
 {
    std::cout << "Hello World" << std::endl
    return 0;
 }
 ```
 
 * If we compile this code, then compiler shows the error as below,
 ```
 In function 'int main()':
 error : expected ';' before 'return'
 ```

 * If we get any errors during compilation, than it will called as **Compile Time Errors**.
 * If Compile time error occurs, then compiler will not create **Executable Binary File**.

## Run-Time Errors

 * Run-Time Errors are occurs after compilation (Compilation completed Successfully) while running the Program (Executable Binary File).
 * Due to Run-Time Errors, Program may not work properly as you wish.
 * It's a logical Error which is present in our Program.
 * Sometimes, These errors cause failed your program & terminate immediately (Program crashed).

 ```
 #include <iostream>
 int main()
 {
    std::cout << "Hello World" << std::endl;
    int value = 7/0;
    std::cout << "Value = " << value << std::endl;
    return 0;
 }
 ```
     
 * If we compile this code, then compiler shows the error as below,
 ```
 In function 'int main()':
 warning : division by zero `[-Wdiv-by-zero]`
 int value = 7/0;
 ```
 * It will print "Hello World", but it will not print "value" because of runtime error.

## Warning

 * This is a problem that is not serious enough for the compiler to hold compilation (Compilation is going to be succeed), but this is basially that your compiler is telling you, You are doing something that have some problems, You should fixed it before it becomes a serious problem.

 ```
 #include <iostream>
 int main()
 {
    int value = 7/0;
    return 0;
 }
 ```
     
 * If we compile this code, then compiler shows the warning as below,
 ```
 In function 'int main()':
 warning : division by zero `[-Wdiv-by-zero]`
 ```