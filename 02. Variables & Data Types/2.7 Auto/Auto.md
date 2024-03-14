# Auto

 * This is the keyword that is going to let the compiler deduce the type for you.
 * This is going to come in handy when you have longer type name that are really hard to type.

 ```
 auto var1 {12};    //integer
 auto var2 {13.0};  //double
 auto var3 {14.0f}; //float
 auto var4 {15.0l}; //long
 auto var5 {'e'};   //character

 //int modifier suffixes
 auto var6 {123u};  //unsigned
 auto var7 {123ul}; //unsigned long
 auto var8 {123ll}; //long long
 ```

 * Here, we take `auto var1` which we initialise with an "integer", so the compiler is going to try & guess the type of this thing and that the type is going to assign to `var1`. This is what `auto` is really use for.
 * If we pass `double`, so it will going to deduce a `double` type to that variable. (like `var2`)
 * If we pass character, than it will interpret it as a character (`var5` is deduce as a `char` type).

 * `auto` is used when you don't really want to explicitly type the type of your variable & you want the compiler to fill in that for you or get it for you.