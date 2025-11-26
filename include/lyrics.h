// lyrics.h
#ifndef LYRICS_H
#define LYRICS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LYRIC_LINE 200   // Maximum length of a single lyric line

// Function declarations

// Display the lyrics of a song given its filename
void displayLyrics(const char *filename);

// Read lyrics from a text file and store in an array (optional)
int readLyrics(const char *filename, char lyrics[][MAX_LYRIC_LINE], int maxLines);

// Print lyrics line by line with optional delay
void printLyrics(const char lyrics[][MAX_LYRIC_LINE], int lineCount, int delayMs);

#endif // LYRICS_H
