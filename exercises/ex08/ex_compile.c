/* Simple example using Glib.

From http://www.ibm.com/developerworks/linux/tutorials/l-glib/

*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

int main(int argc, char** argv) {
    GList* list = NULL;
    list = g_list_append(list, "Hello world!");
    printf("The first item is '%s'\n", (char *) g_list_first(list)->data);
    return 0;
}

/**
*  Where is GLib from and why does it exist?  Who uses it, and for
    what?  Would it have been better if they had given it a name less
    likely to be confused with `glibc`?

    GLib is developed by GNOME, and it used to be a part of GTK+, but
    the developers decided to separate the GUI from the rest. The
    non-GUI portions became GLib. GLib exists to add more advanced
    data structures to C. A couple applications use GLib, such as GAIM
    and GIMP. I don't know if it would've been better i fit had a
    different name, but having distinct names from other libraries is
    generally good.

*  What are the most important pros and cons of using GLib, as opposed
    to another library, or just using core C features?

    Glib has a lot of features and is threadsafe, but it doesn't
    port well to non-unix systems, and everything has to be g_type.

*  What do you have to do to compile and run a "Hello GLib" example?

    gcc -o ex_compile ex_compile.c `pkg-config --cflags --libs glib-2.0`
*/