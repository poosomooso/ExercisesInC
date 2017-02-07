# Reflection 1 - Serena Chen

### Written Sprint Reflection

This sprint went pretty well. Despite getting a late and chaotic start, we were
able to keep up with the class and with each other in terms of readings. We
wanted to focus on learning C, and although we, as a team, could have done more
exercises, I think I am grasping the basics of C, pointers, and compilers.

I think going forward, I should do more of the exercises. I did a lot of
reading, but only one exercise, since that one exercise actually did ended up
taking me a long time to figure out (I experimented a lot with return types for
functions and didn't really know how pointers worked at the time). I think now
that I have the basics down, I should start trying stuff on my own some more.
That way, I will retain more knowledge and learn from my mistakes.

Our team was pretty inconsistent with scrum at every meeting. We often forgot
to say what we had done and almost never remembered to say what we were going to
do before the next meeting. Hopefully, we will get better at scrum, so we can
better keep track of everyone's progress and make sure everyone is on the same
page.

We also decided towards the end of the sprint, that simply having cards for
our sprint backlog was a little vague, since people would do the tasks on the
cards, but no one wanted to move it to done without knowing if the others had
also finished that task. Therefore, we began putting checklists on the cards
with our names on it, so when a person finishes the task, they check off their
name, and when the names have all been checked off, we move the card to done.
That gives us a less ambiguous definition of "done" in our sprints.

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
