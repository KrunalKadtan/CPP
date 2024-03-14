# Logical Operators

 * These operators will work on boolean operands.
 * Operators :

 | | | |
 |---|---|---|
 | AND | `&&` |
 | OR | `\|\|` |
 | NOT | `!` |


 ## AND (`&&`)

 | a | b | a && b |
 |---|---|---|
 | false | false | false |
 | false | true | false |
 | true | false | false |
 | true | true | true |

 * For **AND**, If any of these operands is 'false', then the result is going to be 'false'.

 ## OR (`||`)

 | a | b | a \|\| b |
 |---|---|---|
 | false | false | false |
 | false | true | true |
 | true | false | true |
 | true | true | true |

 * For **OR**, If any of these operands is 'true', then the result is going to be 'true'.

 ## NOT (`!`)

 | a | !a |
 |---|---|
 | true | false |
 | false | true |

 * For **NOT**, It negate whatever you give it, If operands is 'false', it will return 'true' & if operands is 'true' it will return 'false'.