#include <stdio.h>
#include <string.h>
#include <windows.h>  
#include <stdlib.h>

#define MAX_SONGS 4

void playLyrics(const char lyrics[]) {
    for (int i = 0; lyrics[i] != '\0'; i++) {
        printf("%c", lyrics[i]);
        fflush(stdout);
        Sleep(150); 
    }
    printf("\n");
}

int main() {
    char songs[MAX_SONGS][50] = {
        "Tum Hi Ho - Aashiqui 2",
        "Kesariya - Brahmastra",
        "Apna Bana Le - Bhediya",
       "Tera Ban Jaunga - Kabir Singh"
    };

    char lyrics[MAX_SONGS][1000] = {
        // Tum Hi Ho
        "🎵 Tum hi ho... ab tum hi ho...\n"
        "Zindagi ab tum hi ho...\n"
        "Chain bhi, mera dard bhi...\n"
        "Meri aashiqui ab tum hi ho...\n"
        "Tere liye hi jiya main...\n"
        "Khud ko jo yun de diya hai...\n"
        "Teri wafaa ne mujhko sambhala...\n"
        "Saare ghamon ko dil se nikala...\n"
        "Tere saath mera hai naseeba juda...\n"
        "Tujhme rab dikhta hai... yaara main kya karoon...\n",

        // Kesariya
        "🎶 Kesariya tera ishq hai pyaara...\n"
        "Mainu kehndi hai saariyan galan...\n"
        "Tere bin main na rahun hor kahin...\n"
        "Tu hai jahaan main wahin...\n"
        "Rang jaaun teri mehfil mein...\n"
        "Saanu teri khushi de rang chhade...\n"
        "Aankhon mein basi hai tu sada...\n"
        "Tu hi meri dua hai...\n"
        "Mera dil ye keh raha hai...\n"
        "Bas tu hi tu hai yahaan...\n",

        // Apna Bana Le
        "💖 Apna bana le piya...\n"
        "Apna bana le piya...\n"
        "Dil ke nagar mein bas ja...\n"
        "Saanson mein aa ja zara...\n"
        "Tujhse hi to meri rooh hai judti...\n"
        "Tu hai jahaan main wahin...\n"
        "Mujhme tu hai basa...\n"
        "Tu meri duaon ka asar...\n"
        "Bas tu hi mera pyaar...\n"
        "Apna bana le piya...\n",

        // Tera Ban Jaunga
        "🎧 Tera ban jaunga...\n"
        "Jo tu na keh sake, main keh jaunga...\n"
        "Tera ban jaunga...\n"
        "Main tera ho jaunga...\n"
        "Tu meri rooh ka sukoon hai...\n"
        "Meri zindagi ka junoon hai...\n"
        "Har pal tera intezaar hai...\n"
        "Tere bina sab kuch adhoora hai...\n"
        "Tere saath har gham bhool jaunga...\n"
        "Main bas tera ban jaunga...\n"
    };

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
                printf("\n🎵 Available Bollywood Songs:\n");
                for (int i = 0; i < MAX_SONGS; i++) {
                    printf("%d. %s\n", i + 1, songs[i]);
                }
                break;

            case 2:
                printf("\n▶️  Now Playing: %s\n\n", songs[currentSong]);
                playLyrics(lyrics[currentSong]);
                break;

            case 3:
                currentSong = (currentSong + 1) % MAX_SONGS;
                printf("\n⏭️  Next Song: %s\n\n", songs[currentSong]);
                playLyrics(lyrics[currentSong]);
                break;

            case 4:
                currentSong = (currentSong - 1 + MAX_SONGS) % MAX_SONGS;
                printf("\n⏮️  Previous Song: %s\n\n", songs[currentSong]);
                playLyrics(lyrics[currentSong]);
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
