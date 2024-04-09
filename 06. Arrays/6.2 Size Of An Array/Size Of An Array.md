# Size Of An Array

 * If we try to print an array using `for` loop, we have to use the size.
 ```
 int scores[] {10, 12, 15, 11, 18, 17, 22, 23, 24};
 ```
 * Size of this array may change if somebody decides to add elements OR remove elements, then size is going to be irrelavent.
 * C++ provides a way, we can carry for size of an array at run-time & we are going to get a real size, accounting for cuurent number of elements that we have in array; for that we use `std::size()` function.

 ## Array Size with `sizeof`

  * If we use `sizeof` & pass in the array; we going to get an entire size of an array & if we take that & divide that with the size of single element in the array, we can get numbers of elements in the array.
  ```
  std::cout << "size of scores : " << sizeof(scores) << std::endl;
  std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
  std::cout << "scores item count : " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

  size_t count {sizeof(scores) / sizeof(scores[0])};

  std::cout << "Printing out array items : " << std::endl;
  for(size_t i {0}; i<count; i++)
  {
    std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
  }
  ```

 ## Range Based for Loop

  * We will use this one instead of above two methodes.

  ```
  for(auto score : scores){
    std::cout << "Score : " << score << std::endl;
  }
  ```
  **OR**
  ```
  for(auto i : scores){
    std::cout << "Value : " << i << std::endl;
  }
  ```
  * As you can see, by using this we lost the indexes printing, if you want to do that you can use any of above two methods.