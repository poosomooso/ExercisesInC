/*
Exercise 8

Takes a filename as a commandline argument and prints a list of all
the words in the file as well as their frequencies.

Serena Chen
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

/**
A function for the hash table for each function--takes an entry and prints
"key: frequency"
*/
void print_freq(gpointer key, gpointer value, gpointer user_data) {
    printf("%s: %i\n", (gchar *)key, *(gint *)value);
}

/**
Takes a filename as a command line argument, and prints the frequency of all
the words in the document.
*/
int main(int argc, char** argv) {
    char *fname = argv[1];
    FILE *file = fopen(fname, "r");
    GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal);
    char word[256];
    gint one = 1;
    while(fscanf(file, "%s", word) != EOF){
        gchar *key = g_ascii_strdown(word, strlen(word));
        if(g_hash_table_contains(hash, key)){
            gint count = (*(gint *) g_hash_table_lookup(hash, key))+1;
            g_hash_table_insert(hash, key, &count);
        }
        else{
            g_hash_table_insert(hash, key, &one);
        }
    }
    g_hash_table_foreach(hash, (GHFunc)print_freq, NULL);
}