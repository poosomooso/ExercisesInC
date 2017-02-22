# Reflection 2 - Serena Chen

### Written Sprint Reflection

This sprint went pretty poorly for me. During the two weeks of this sprint, I
read chapters 3 and 5 of Head First C, and did exercise 3. I believe my lack of
productivity is due in large part because UOCD took over my life and members
of my team wanted us to spend an exorbitant amount of time doing UOCD.
Hopefully this will not happen again; my UOCD team is going to have a long
team health meeting and really lay down our expectations and desired workload for
the course.

The original plan was to do a lot of readings and exercises from Head First C, in
an attempt to learn all the topics we need to in order to do the web server
exercise. As a result of this plan and my lack of SoftSys productivity, I did
not read any of the ThinkOS chapters.


### Link to exercises/reading questions

[Exercise 1](https://github.com/poosomooso/ExercisesInC/tree/master/exercises/ex01)

[TOS Chapter 1 Reading Questions](https://github.com/poosomooso/ExercisesInC/blob/master/reading_questions/thinkos.md#chapter-1)

[TOS Chapter 2 Reading Questions](https://github.com/poosomooso/ExercisesInC/blob/master/reading_questions/thinkos.md#chapter-2)

### Exam Question

##### Question

Given that keyboard input is a comma separated coordinate of integers that looks
like:

> 80,50

Write a method that will read in the coordinate into an int array, and then
will return said array. (HFC2)

##### Solution

```C
#include <stdio.h>

int *coord_reader(){
    int x, y;
    int *coord = malloc(sizeof(int)*2); //stores the array in the heap
    scanf("%i,%i", &x, &y);
    coord[0] = x;
    coord[1] = y;
    return coord;
}
```
