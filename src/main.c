#include <stdio.h>
#include <stdlib.h>
#include "../include/player.h"
#include "../include/lyrics.h"
// #include "player.h"
// #include "lyrics.h"

int main() {
    int choice;
    int currentSong = 0;

    printf("🎬 BOLLYWOOD MUSIC PLAYER 🎶\n");
    printf("---------------------------------\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Show Song List\n");
        printf("2. Play Song\n");
        printf("3. Next Song\n");
        printf("4. Previous Song\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showSongList();
                break;

            case 2:
                playSong(currentSong);
                break;

            case 3:
                currentSong = nextSong(currentSong);
                playSong(currentSong);
                break;

            case 4:
                currentSong = previousSong(currentSong);
                playSong(currentSong);
                break;

            case 5:
                printf("\n🎧 Exiting Bollywood Music Player... Goodbye!\n");
                exit(0);

            default:
                printf("❌ Invalid choice! Try again.\n");
        }
    }
    return 0;
}
