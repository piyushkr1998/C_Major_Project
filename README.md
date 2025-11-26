# Bollywood Music Player - C Project

## Description

This is a simple Bollywood music player implemented in C. The program allows users to:

* View a list of Bollywood songs.
* Play a song and display its lyrics with a timed effect.
* Navigate to the next or previous song using a menu.
* Exit the player.

The lyrics are displayed in the console character by character with a delay to simulate a singing effect.

## Folder Structure

```
C_Major_Project/
├── src/                   # All .c files (main.c)
├── include/               # All .h files 
├── docs/                  # Project report, flowcharts
├── README.md              # This file
```

## How to Compile

Make sure you have a C compiler (like GCC) installed. Navigate to the `src/` folder and run:

```bash
gcc -o main main.c -std=c99
```

This will generate an executable named `main.exe` (Windows) or `main` (Linux/Mac).

## How to Run

Run the compiled executable:

```bash
./main   # Linux/Mac
main.exe # Windows
```

The program will display a menu with options to show songs, play a song, navigate songs, or exit.

## Menu Options

1. **Show Song List**: Displays all available Bollywood songs.
2. **Play Song**: Plays the currently selected song and displays lyrics.
3. **Next Song**: Moves to the next song in the list.
4. **Previous Song**: Moves to the previous song in the list.
5. **Exit**: Closes the music player.

## Features

* Menu-driven console interface.
* Lyrics displayed with a timed character-by-character effect using `Sleep()`.
* Supports next and previous song navigation.
* Clean and modular code suitable for learning C programming.

## Future Enhancements

* Add real audio playback.
* Include shuffle and repeat functionality.
* GUI-based player using libraries like GTK or SDL.
* Load songs and lyrics from external files dynamically.

## References

1. The C Programming Language by Kernighan & Ritchie.
2. Online C tutorials and forums for console-based projects.
3. Personal knowledge and coding practice.

