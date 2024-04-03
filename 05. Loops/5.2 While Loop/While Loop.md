# While Loop

 ```
 const unsigned int COUNT {10};

 unsigned int i {0};

 while (i < COUNT){
    std::cout << "Hello, World..!" << std::endl;
    ++i;
 }
 ```

 * Here, Iterator is `unsigned int` variable `i` which is declared outside of `while` whereas in `for` it's decalred in `( )` with `for`.
 * Starting point is '0', because here we initialise `i` with '0' (`{0}`).
 * Here, Test is to check if `i` is less than `COUNT` or not (`i<COUNT`); if this condition satifies than loop will be continue otherwise loop will be break or closed.
 * Here, increment is `++i`.
 * Loop body is `sts::cout` statement. After `while` loop statement after `( )` whole block of code inside `{ }` is called Loop Body which is execute multiple times.

 ## How does it works..?

 ```
 const unsigned int COUNT {10};

 unsigned int i {0};

 while (i < COUNT){
    std::cout << "Hello, World..!" << std::endl;
    ++i;
 }
 ```

 * When this code gets executed; we going to start with `i=0` because that's what we are initialising this value with.
 * After this, it will run the test (checks condition); if it will be true (condition satisfies) then it will execute the loop body.
 * Then after body executed, it will run incrementation part; it will increase the value of `i`, then again it will run the test & if it will be true then it will execute the loop body; This will continued until the test will be fail (condition will not satisfy).

 ## Scope Of Iterator

 * Iterator we are declaring outside of `while`; it can be used inside whole `main` function.