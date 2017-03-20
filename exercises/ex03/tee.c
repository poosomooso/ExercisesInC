
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char ch;
    char *write = "w";
    while ((ch = getopt(argc, argv, "a")) != EOF){
        write = "a";
    }
    argc -= optind;
    argv += optind;

    FILE *outputs[argc];
    for(int i = 0; i<argc; i++){
        outputs[i] = fopen(argv[i], write);
    }
    char s[2];
    while(fgets(s, 2, stdin) != NULL){
        for(int i = 0; i<argc; i++){
            fprintf(outputs[i], "%s", s);
        }
        printf("%s", s);
    }
    for(int i = 0; i<argc-1; i++){
        fclose(outputs[i]);
    }
    return 0;
}

/**
Reflect:
I started development by implementing the basic functionality, then adding on
the options. One thing that I ran into was, since the options will skip past the
first argument ("tee"), I ran into OBO errors that took me a long time to
debug. I did a fair amount of testing the code by parts, but I could've done a
better job. Basically, I tested after writing the basic functionality, and then
again after implementing the options. I didn't have a horrible time, but
debugging might have been easier if I had tested after every step.

Comparison to real code (http://git.savannah.gnu.org/cgit/coreutils.git/tree/src/tee.c):
*/
