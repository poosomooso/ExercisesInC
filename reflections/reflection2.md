# Reflection 2 - Serena Chen

### Written Sprint Reflection

This sprint went pretty poorly for me. During the two weeks of this sprint, I
read chapters 3 and 5 of Head First C, and did exercise 3. I believe my lack of
productivity is due in large part because of the workload for UOCD, since
members of my team wanted us to spend an exorbitant amount of time doing UOCD.
Hopefully this will not happen again; my UOCD team is going to have a long
team health meeting and really lay down our expectations and desired commitment
for the course.

The original plan was to do a lot of readings and exercises from Head First C,
in an attempt to learn all the topics we need to in order to do the web server
exercise. As a result of this plan and my lack of SoftSys productivity, I did
not read any of the ThinkOS chapters.

Going forward, I will budget my time better. Another thing that may help is
planning regular meetings with my SoftSys team, so that we will get work done.
Since the end of the first project is approaching, we will use most of the next
sprint to work on the project.

### Link to exercises/reading questions

[Exercise 3](https://github.com/poosomooso/ExercisesInC/tree/master/exercises/ex03)

I recently committed it, but I finished it during Sprint 2. I
was trying to resolve an issue where I wasn't sure what was meant by
"professional code," but then forgot to ask. So it is not completely finished,
since the last question was not answered.

### Exam Question

##### Question

How many bytes of memory would `my_home` take up if the following code
were run in a 64-bit system?

```C
union land_area {
    double sqft;
    float acres;
    int far_as_eye_can_see : 1;
};
struct house {
    unsigned int for_sale : 1;
    unsigned int num_stories : 8;
    char *address;
    union land_area area;
};

struct house my_home =
    { 0, 4, "1000 Olin Way", {.sqft = 88500}};
```

##### Solution

24 bytes.

* `for_sale` is 1 bit, less than a byte
* `num_stories` is 8 bits, or 1 byte
* `address` is a pointer, which is 8 bytes in a 64-bit system
* `union` takes the amount of space of its largest data type. Doubles are 8
    bytes.
* Added together, it is a little over 17 bytes. Since 64-bit systems pack
    memory in 8 byte chunks, it rounds up to 24.
