## Number System

 1. Decimal (Base 10)

 * | 2371 | $`(2*10^3) + (3*10^2) + (7*10^1) + (1*10^0)`$ |
   | 924 | $`(9*10^2) + (2*10^1) + (4*10^0)`$ |
   | 47 | $`(4*10^1) + (7*10^0)`$ |

 2. Binary (Base 2)

 * | 100101 | $`(1*2^5) + (0*2^4) + (0*2^3) + (1*2^2) + (0*2^1) + (1*2^0)`$ |
   | 10010 | $`(1*2^4) + (0*2^3) + (0*2^2) + (1*2^1) + (0*2^0)`$ |
   | 111 | $`(1*2^2) + (1*2^1) + (1*2^0)`$ |

 * | 3 Digits || 4 Digits || Generalization |
   | Binary | Decimal | Binary | Decimal | Digits | Data Range|
   |---|---|---|---|---|---|---|---|
   | 000 | 0 | 0000 | 0 | 1 | 0 - 1 |
   | 001 | 1 | 0001 | 1 | 2 | 0 - 3 |
   | 010 | 2 | 0010 | 2 | 3 | 0 - 7 |
   | 011 | 3 | 0011 | 3 | 4 | 0 - 15 |
   | 100 | 4 | 0100 | 4 | 5 | 0 - 31 |
   | ... | ... | ... | ... | ... | ... |
   | 111 | 7 | 1111 | 15 | n | 0 - ($`2^n`$ - 1) |

 * | Digits | Bytes | Data Range |
   | 8 | 1 | 0 - 255 |
   | 16 | 2 | 0 - 65535|
   | 32 | 4 | 0 - 34359738367|
   | 64 | 8 | 0 - 18446744073709551615 |

 * Binary Number starts with '0b'. 

 3. Hexadecimal

 * | Binary | Hex | Decimal |
   | 0000 | 0 | 0 |
   | 0001 | 1 | 1 |
   | 0010 | 2 | 2 |
   | 0011 || 3 | 3 |
   | 0100 | 4 | 4 |
   | 0101 | 5 | 5 |
   | 0110 | 6 | 6 |
   | 0111 | 7 | 7 |
   | 1000 | 8 | 8 |
   | 1001 | 9 | 9 |
   | 1010 | 10 | A |
   | 1011 | 11 | B |
   | 1100 | 12 | C |
   | 1101 | 13 | D |
   | 1110 | 14 | E |
   | 1111 | 15 | F |
  
 * Hexadecimal Numbers starts with '0x'.

 4. Octal System

 * | Binary | Decimal | Oct |
   |---|---|---|
   | 000 | 0 | 0 |
   | 001 | 1 | 1 |
   | 010 | 2 | 2 |
   | 011 | 3 | 3 |
   | 100 | 4 | 4 |
   | 101 | 5 | 5 |
   | 110 | 6 | 6 |
   | 111 | 7 | 7 |

 * Octal Numbers starts with '0'.


* All data is represented by a bunch of grouped cells of 0's & 1's in memory.
* As the range of your data grows, so will the number od digits you need to represent the data in memory.
* Hexadecimal system makes it a little easier for humans to handle streams of data with 0's & 1's.
* Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times.