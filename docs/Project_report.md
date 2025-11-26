C_Major_Project - Music Player Project Report

---

**Title Page**
Project Title: Bollywood Music Player in C
Course: B-Tech CSE
Name: Piyush Kumar
Date: 27-11-2025

---

**Abstract**
This project implements a simple Bollywood music player in C. The program allows users to play songs, display lyrics with timed output, and navigate through the song list using a menu-driven interface.

---

**Problem Definition**
Design a C program that can play Bollywood songs and display lyrics on the console. The player must have options for next song, previous song, and exit.

---

**System Design**
**Algorithm / Flowchart:**

1. Start the program.
2. Display the menu with options: Show Song List, Play Song, Next Song, Previous Song, Exit.
3. Take user input.
4. Perform action based on choice:

   * Show Song List: Display all songs.
   * Play Song: Display lyrics of the current song.
   * Next Song: Move to next song in the array.
   * Previous Song: Move to previous song in the array.
   * Exit: End the program.
5. Repeat until Exit is selected.


---

**Implementation Details**

* Source code files: `main.c`, `player.c` (optional), `lyrics.c` (optional)
* Header files: `player.h`, `lyrics.h`
* Key functions:

  * `playLyrics(const char lyrics[])`: Prints lyrics line by line with delay.
  * Main menu handling using `switch-case`.
* Arrays store song names and lyrics.


---

**Testing & Results**

* Sample Output:

```
🎬 BOLLYWOOD MUSIC PLAYER 🎶
Menu:
1. Show Song List
2. Play Song
3. Next Song
4. Previous Song
5. Exit
Enter your choice: 1
🎵 Available Bollywood Songs:
1. Tum Hi Ho - Aashiqui 2
2. Kesariya - Brahmastra
...
```

* All menu options tested successfully.
* Lyrics displayed correctly with delay.

---

**Conclusion & Future Work**

* Project successfully implements a simple Bollywood music player.
* Future improvements: actual audio playback, shuffle/repeat options, GUI integration.

---

**References**

1. C Programming Language by Kernighan & Ritchie
2. Online tutorials for console-based C projects

---

**Appendix (Optional)**

* Full source code listing.
* Additional diagrams or screenshots.
