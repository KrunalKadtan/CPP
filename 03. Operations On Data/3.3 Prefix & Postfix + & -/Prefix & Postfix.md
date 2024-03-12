# Prefix & Postfix

 ## Regular Increment/Decrement
 ```
 int value {5};

 //Increment by one
 value = value + 1;
 std::cout << "The value is : " << value << std::endl;  //6

 value = 5;     //Reset value to 5

 //Decrement by one
 value = value - 1;
 std::cout << "The value is : " << value << std::endl;  //4
 ```

 * Here, Associativity of `=` is from 'Right to Left', so it will assign value of 'expression at right side' to 'variable at left side'.


 ## Postfix Increment/Decrement

 ```
 value = 5;

 std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
 std::cout << "The value is : " << value << std::endl; //6

 std::cout << std::endl;

 //Decrement with postfix

 value = 5;      //Reset value to 5

 std::cout << "The value is (decrementing) : " << value-- << std::endl;
 std::cout << "The value is : " << value << std::endl;
 ```

 * Here, `value++` is postfix increment.
 * When you use postfix increment operator like this, you should know is that this is going to increment by '1', it's not going to increment by any other value.
 * It's not going to increment directly, Here initialy we have `value = 5;`, so when execution heads toward `std::cout` statement, it'll print "5" & as soon as the statement is done, the value is going to be increment by '1' & second statement of `std::cout` will print "6".
 * It returns the original value before being incremented & then increments it.
 * We told it postfix increment because, here `++` is after `value`.
 * It's the same thing with `value--`.
 * It's not going to decrement directly, Here initialy we have `value = 5;`, so when execution heads toward `std::cout` statement, it'll print "5" & as soon as the statement is done, the value is going to be decrement by '1' & second statement of `std::cout` will print "4".
 * It returns the original value before being decremented & then decrements it.


 ## Prefix Increment/Decrement

 ```
 value = 5;

 ++value;
 std::cout << "The value is (prefix ++) : " << value << std::endl;

 value = 5;      //Reset value to 5
 std::cout << "The value is (prefix ++ in place) : " << ++value << std::endl;

 std::cout << std::endl;

 //Prefix : Decrementing

 value = 5;     // Reset value to 5;
 std::cout << "The value is (prefix --) : " << value << std::endl;

 value = 5;      //Reset value to 5
 --value;
 std::cout << "The value is (prefix -- in place) : " << --value << std::endl;
 ```

 * Here, `++value` is going to increment value directly.
 * As soon as, this statement `++value;` is executed, we going to have "value = 6", & it will print '6' here.
 * It's the same thing with `--value`.

#

* There is no `value**` or `**value` or `value//` or `//value`. They don't make sense, these prefix/postfix operators are only available for `+` & `-`, again because that's where they make sense.