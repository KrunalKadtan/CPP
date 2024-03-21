# Numeric Limits (`#include <limits>`)

 * `std::numeric_limits<T>::min()`
 * `std::numeric_limits<T>::max()`
 * `std::numeric_limits<T>::lowest()`
 * Here, 'T' is like a placeholder, for which you want to know min, max & lowest point respectively.

 * **Floating Point :**
   * `min` --> It represent smallest positive number {1.17549e-38}
   * `max` --> It represent maximum floating point number {3.40282e+38}
   * `lowest` --> It represent lowest negative number {-3.40282e+38}

 * **Signed Integer :**
   * `min` --> It represent minimum number (maybe negative if we use **signed integer**) {-32768}
   * `max` --> It represent maximum number {32767}
   * `lowest` --> It doesn't mean anything for integer

 * **Unsigned Integer (short) :**
   * `min` --> It represent minimum number {0}
   * `max` --> It represent maximum number {65535}
   * `lowest` --> It doesn't mean anything for integer

#

For Reference : https://en.cppreference.com/w/cpp/types/numeric_limits