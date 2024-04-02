# For Loop

 * Pillars of any loop;
    * Iterator
    * Starting Point
    * Test (controls when the loop stops)
    * Increment/Decrement
    * Loop Body

 ```
 for(unsigned int i {}; i < 10; ++i) {
    std::cout << "Hello, World..!" << std::endl;
 }
 ```
 * Here, Iterator is `unsigned int` variable `i`.
 * Starting point is '0', because here we initialise `i` with '0' (`{}`).
 * Here, Test is to check if `i` is less than 10 or not (`i<10`); if this condition satifies than loop will be continue otherwise loop will be break or closed.
 * Here, increment is `++i`.
 * Loop body is `sts::cout` statement. After `for` loop statement after `( ; ; )` whole block of code inside `{ }` is called Loop Body which is execute multiple times.

 ## How does it works..?

 ```
 for(unsigned int i {}; i < 10; ++i) {
    std::cout << "Hello, World..!" << std::endl;
 }
 ```

 * When this code gets executed; we going to start with `i=0` because that's what we are initialising this value with.
 * After this, it will run the test (checks condition); if it will be true (condition satisfies) then it will execute the loop body.
 * Then after body executed, it will run incrementation part; it will increase the value of `i`, then again it will run the test & if it will be true then it will execute the loop body; This will continued until the test will be fail (condition will not satisfy).

 ## Scope Of Iterator

 * Iterator we are declaring inside `()` after `for` is only used inside 'for loop'; it's going to be scoped inside the body of loop.
 ```
 int main()
 {
    for{size_t i {0}; i<10; i++}
    {
        // i is valid to use within the boundaries of the { } here
        std::cout << "i is usable here, the value of i is : " << i << std::endl;
    }
    //if you try to access i here, you'll get an error
    // i doesn't exist in the main function local scope
    return 0;
 }
 ```

 * If you want to use iterator outside the loop, then you have to declare it outside the for loop.
 ```
 size_t j {};

 for(j ; j<10; ++j)
 {
    std::cout << "Using j variable from main function local scope : " << j << std::endl;
 }
 std::cout << "Loop done, the value of j is : " << j << std::endl;
 ```

#

 * There is a type we use to do iterators & it makes our code more readable, that's called `size_t`.
 * It has memory of 8-bytes; it has quite good range of values.

 `size_t` --> Not a type, just a type alias for some `unsigned int` representation

 * If we use `size_t` for our iterator; it wll be like below;
 ```
 for(size_t i {}; i<10; ++i) {
    std::cout << "Hello, World..!" << std::endl;
 }
 ```