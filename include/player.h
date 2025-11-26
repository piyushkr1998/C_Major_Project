// player.h
#ifndef PLAYER_H
#define PLAYER_H

// Include standard libraries needed by the player
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum length for a song name
#define MAX_SONG_NAME 100

// Function declarations

// Play a song given its filename
void playSong(const char *filename);

// Pause the current song
void pauseSong();

// Resume the paused song
void resumeSong();

// Stop the current song
void stopSong();

// List all songs available in the assets folder
void listSongs(const char *folderPath);

#endif // PLAYER_H
