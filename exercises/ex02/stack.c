/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
	printf("%d\n", array[i]);
    }

    return 0;
}

/**
Exercise questions:
1)  It should print 2 pointers for the arrays in foo and bar, and then print the
    contents of the array from foo.

2)  warning: function returns address of local variable [-Wreturn-local-addr]
     return array;

    C can't return the address of a local variable, since the local variable
    will go away after the method is over ie. the pointer will point to
    space that used to be part of the foo local space but is obsolete after
    the foo is over.

3)  Output:
    0x7ffc82525320
    0x7ffc82525320
    Segmentation fault (core dumped)

    The pointers of the two arrays point to exactly the same memory addresses.
    Once a method is over, the process reuses that memory for the next thing on
    the stack. In this case, the stack used some memory to stare the variables
    of foo, then reused that memory for bar, which is essentially the same
    method, so all the pieces of memory lined up, but when the process went into
    the for loop and called printf, printf overwrote the piece of memory that
    contained the array, and a seg fault occured.

4)  There's just a Segmentation Fault. Probably for the same reason as above.
*/
