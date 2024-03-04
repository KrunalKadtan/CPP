# Assignments


 * After the variable is initialize, you can later assign new value to it.

 ```
 int var1 {123};    //Declare & initialize
 std::cout << "var1 : " << var1 << std::endl;

 var1 = 55;     // Assign
 std::cout << "var1 : " << var1 << std::endl;
 ```

 ```
 double var2 {44.55};   //Declare & initialize
 std::cout << "var2 : " << var2 << std::endl;

 var2 = 99.99;  //Assign
 std::cout << "var2 : " << var2 << std::endl;
 ```

 * One thing you really need to be careful about, If you are doing `auto` type deduction, the type is not vary apperant by looking at the declaration of variable.
 * By looking at auto `var3`, we don't really know what that is, it's very easy to try & put in a value that is illegal; for example, we have deduce an unsigned integer which is only going to store positive numbers, but we are putting in a negative number, & Compiler isn't going to give any compiler error, it'll silently put in some garbage value.
 ```
 auto var3 {333u};  //Declare & initialize with type deduction
 var3 = -22;    //Assign negative number, DANGER!
 std::cout << "var3 : " << var3 << std::endl;
 ```