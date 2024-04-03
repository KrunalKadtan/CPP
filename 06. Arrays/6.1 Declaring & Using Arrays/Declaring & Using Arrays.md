# Declaring & Using Arrays

 * Arrays are a way to set up a collections in C++ program.
 * Arrays are use to group many variables together & manupilate them as single unit.

 ```
 //Declaring an Array
 int scores[10];
 ```

 * For declaring array, we have to specify the type of collection (array) (Here it's `int`); then name of collection (Here it's `scores`) & then size of collection in `[ ]` (Here it's `10`).
 * Arrays are index from **'0'**. They don't start with **'1'**, they start from **'0'**. So first element of array is going to live at index '0', it's not going to live at index '1'.

 * Writing data into an array;
 ```
 //Writing data in an array
 scores[0] = 20;
 scores[1] = 21;
 scores[2] = 24;
 //...
 //Writing out of bounds. BAD!
 scores[22] = 300;
 ```

 * Writing data with a loop;
 ```
 for(size_t i{0}; i<10; i++){
    scores[i] = i * 3;
 }
 ```

 * Reading data manually
 ```
    //print Values
    std::cout << "Reading out score value (manually) : " << std::endl;

    std::cout << "scores[0] : " << scores[0] << std::endl;
    std::cout << "scores[1] : " << scores[1] << std::endl;
    //...
    std::cout << "scores[9] : " << scores[9] << std::endl;
 ```

 * Looping through an array;
 ```
 //Can print through a loop
 
 for(size_t i{0}; i<10; ++i)
 {
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
 }
 ```

 * If you try to read data outside of array boundary, you may read garbage data.

 * Initialize the array at declaration;
 ```
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i<5; i++)
    {
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }
 ```
 * If you don't initialize all the elements, those you leave out are initialized to 0.
 ```
    int families[5] {12, 7, 5};
    for(size_t i{0}; i<5; i++)
    {
        std::cout << "families[" << i << "] : " <<  families[i] << std::endl;
    }
 ```

 * Omit the size of the array at declaration;
 ```
    int class_sizes[] {10, 12, 15, 11, 18, 17};
    for(auto value : class_sizes){
        std::cout << "value : " << value << std::endl;
    }
 ```
 * Compiler will deduce the size of array from the elements that you initialize your array with.
 * The code then iterates over each element in the array using a **range-based for loop**.
 * In this loop, `value` is a variable that takes on each element of the class_sizes array successively in each iteration. The loop body prints out the value of `value` using std::cout. 
 * This loop will iterate over all elements of the array and print each element's value.

 * Constant Arrays, can't be modified.
 ```
 const int multipliers[] {22, 30, 15};
 multipliers[1] = 20; //Can't change elements of a const array : ERROR
 ```

 * Operations on data stored i arrays
 ```
    //sum up scores array, store result in sum
    int sum {0};

    for(int element : scores){
        sum += element;
    }

    std::cout << "Score sum : " << sum << std::endl;
 ```

#

 * Arrays store elements of **same type**.
 * If you store different type then the type that declare for array, you going to get a compiler ERROR.