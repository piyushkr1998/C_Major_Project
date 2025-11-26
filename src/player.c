#include <stdio.h>
#include <windows.h>
#include "player.h"
#include "lyrics.h

char songs[MAX_SONGS][50] = {
    "Tum Hi Ho - Aashiqui 2",
    "Kesariya - Brahmastra",
    "Apna Bana Le - Bhediya",
    "Tera Ban Jaunga - Kabir Singh"

}
void showSongList() {
    printf("\n🎵 Available Bollywood Songs:\n");
    for (int i = 0; i < MAX_SONGS; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }
}

void playSong(int index) {
    printf("\n▶️  Now Playing: %s\n\n", songs[index]);
    playLyrics(index);
}

int nextSong(int currentSong) {
    currentSong = (currentSong + 1) % MAX_SONGS;
    printf("\n⏭️  Next Song: %s\n", songs[currentSong]);
    return currentSong;
}

int previousSong(int currentSong) {
    currentSong = (currentSong - 1 + MAX_SONGS) % MAX_SONGS;
    printf("\n⏮️  Previous Song: %s\n", songs[currentSong]);
    return currentSong;
}
