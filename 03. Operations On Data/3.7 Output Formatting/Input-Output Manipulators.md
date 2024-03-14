# Input/Output Manipulators

 * Manipulators are helper functions that make it possible to control input/output streams using `operator<<` or `operator>>`.

 * The manipulators that are invoked without arguments (e.g. `std::cout << std::boolalpha;` or `std::cin >> std::hex;`) are implemented as functions that take a reference to a stream as their only argument. 
 * The special overloads of `basic_ostream::operator<<` and `basic_istream::operator>>` accept pointers to these functions. These functions (or instantiations of function templates) are the only addressable functions in the standard library.

 * The manipulators that are invoked with arguments (e.g. `std::cout << std::setw(10);`) are implemented as functions returning objects of unspecified type.
 * These manipulators define their own `operator<<` or `operator>>` which perform the requested manipulation.

 ## Defined in header `<ios>`

| Manipulator | Description |
|---|---|
| `boolalpha` | Switches between textual and numeric booleans. |
| `noboolalpha` | Switches to numeric booleans (default). |
| `showbase` | Shows prefix for numeric base (e.g., `0x` for hexadecimal). |
| `noshowbase` | Hides prefix for numeric base (default). |
| `showpoint` | Always includes decimal point in floating-point representation. |
| `noshowpoint` | Includes decimal point only for non-zero values (default). |
| `showpos` | Shows the `+` sign for non-negative numbers. |
| `noshowpos` | Hides the `+` sign for non-negative numbers (default). |
| `skipws` | Skips leading whitespace on input (default). |
| `noskipws` | Considers leading whitespace on input. |
| `uppercase` | Uses uppercase characters for some output formats. |
| `nouppercase` | Uses lowercase characters for some output formats (default). |
| `unitbuf` | Flushes output after each operation. |
| `nounitbuf` | Buffers output until flushed explicitly (default). |
| `internal` | Pads output with spaces from the right (default). |
| `left` | Pads output with spaces from the left. |
| `right` | Pads output with spaces from the right. |
| `dec` | Sets base 10 for integer I/O (default). |
| `hex` | Sets base 16 (hexadecimal) for integer I/O. |
| `oct` | Sets base 8 (octal) for integer I/O. |
| `fixed` (C++11) | Uses fixed-point notation for floating-point I/O. |
| `scientific` (C++11) | Uses scientific notation for floating-point I/O (default). |
| `hexfloat` (C++11) | Uses hexadecimal notation for floating-point I/O. |
| `defaultfloat` (C++11) | Resets floating-point formatting to implementation-defined (default). |
| `ws` | Consumes whitespace from the input stream. |
| `ends` | Outputs a null character (`'\0'`). |
| `flush` | Flushes the output stream. |
| `endl` | Outputs a newline character (`'\n'`) and flushes the output stream. |
| `emit_on_flush` (C++20) | Controls emission on flush for `basic_syncbuf`. |
| `noemit_on_flush` (C++20) | Prevents emission on flush for `basic_syncbuf` (default). |
| `flush_emit` (C++20) | Flushes the stream and emits content if using `basic_syncbuf`. |
| `resetiosflags` | Clears specified `ios_base` flags. |
| `setiosflags` | Sets specified `ios_base` flags. |
| `setbase` | Changes the base used for integer I/O. |
| `setfill` | Changes the fill character used for padding. |
| `setprecision` | Sets the number of digits displayed for floating-point values |
| `setw` | Changes the width of the next input/output field (function) |
| `get_money` (C++11) | Parses a monetary value (function template) |
| `put_money` (C++11) | Formats and outputs a monetary value (function template) |
| `get_time` (C++11) | Parses a date/time value of specified format (function template) |
| `put_time` (C++11) | Formats and outputs a date/time value according to the specified format (function template) |
| `quoted` (C++14) | Inserts and extracts quoted strings with embedded spaces (function template) |


Referance Link : https://en.cppreference.com/w/cpp/io/manip