#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"
#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef song_node *table[26];

void add_song(table , char *, char *);

song_node *search_name(table, char *);

song_node *search_artist(table t, char * artist);

void print_letter(table t, char c);

void print_artist(table t, char *);

void print_library(table t);

void shuffle(table t);

void delete_song(table t, char *, char *);

void delete(table t);

#endif
