#include <stdio.h>
#include <windows.h>
#include "lyrics.h"

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

void playLyrics(int index) {
    const char *text = lyrics[index];

    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        Sleep(150);
    }

    printf("\n");
}
