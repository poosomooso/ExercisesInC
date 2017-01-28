/*
Serena Chen
SoftSys Exercise 1
*/

#include <stdio.h>

int main(){
    int x = 5;
    int y = x + 1;
    printf("%i\n", y);
    return 0;
}


/*
- I believe the line in the assembly code that corresponds to "int x = 5;" is "movl	$5, -4(%rbp)"
- when printf prints x, the string constant being stored is "%i\n" whereas in the original, only "hello" is stored.
- To be honest, I'm not exactly sure what I am looking at, but in the unoptimized version, it seems there are many more instructions,
    particularly the add instruction. In the optimized code, whereas in the code where y didn't exist, the computer stored "5", the instructions
    here automatically tell the computer to store "6".
- I think optimization frontloads a lot of the work onto the compiler and evaluates/combines a lot of
    expressions or pointer math at compile time.
*/
