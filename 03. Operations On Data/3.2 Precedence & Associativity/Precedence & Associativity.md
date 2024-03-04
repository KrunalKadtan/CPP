# Precedence & Associativity

 * Set of rules that we can follow to know what to do when we have multiple operators in the same expression.

 * Precedence --> which operation to do first
 * Associativity --> which direction or which order

| Precedence Level | Operator | Description | Associativity |
|---|---|---|---|
| 1 | `::` | Scope resolution | Left to right → |
| 2 | `a++` & `a--`,`type()` & `type{}`, `a()`, `a[]`, `.` & `->` | Suffix/postfix increment/decrement, Functional cast, function call, subscript, member access (through pointer) | Left to right → |
| 3 | `++a` & `--a`, `+a` & `-a`, `!` & `~`, `(type)`, `*a`, `&a`, `sizeof`, `co_await`, `new`, `new[]`, `delete` & `delete[]` | Prefix increment and decrement, unary plus/minus, logical NOT & bitwise NOT, C-style cast, indirection (dereference), address-of, size-of, await-expression (C++20), dynamic memory allocation, dynamic memory deallocation | Right to left ← |
| 4 | `.*` & `->*` | Pointer to member | Left to right → |
| 5 | `*`, `/`, `%` | Multiplication, division, modulo | Left to right → |
| 6 | `+`, `-` | Addition, subtraction | Left to right → |
| 7 | `<<`, `>>` | Bitwise left shift & right shift | Left to right → |
| 8 | `<=>` | Three-way comparison (C++20) | Left to right → |
| 9 | `<`, `<=`, `>`, `>=` | Relational operators | Left to right → |
| 10 | `==`, `!=` | Equality operators | Left to right → |
| 11 | `&` | Bitwise AND | Left to right → |
| 12 | `^` | Bitwise XOR | Left to right → |
| 13 | `\|` | Bitwise OR | Left to right → |
| 14 | `&&` | Logical AND | Left to right → |
| 15 | `\|\|` | Logical OR | Left to right → |
| 16 | `a?b:c`, `throw`, `co_yield`, `=`, `+=` & `-=`, `*=` & `/=`& `%=`, `<<=` & `>>=`, `&=` & `^=` & `\|=` | Ternary conditional, throw operator, yield-expression (C++20), Direct assignment, compound assignments | Right to left ← |
| 17 | `,` | Comma | Left to right → |

* It is better to make the intent in your code as clear as possible by clearly using `()` to indicate which operations you want done first.