# OOP-RockPaperScissors
A simple 2-player Rock-Paper-Scissors game 
# Rock-Paper-Scissors (2-Player Console Game)

A C++ Object-Oriented Programming (OOP) project implementing a classic 2-player Rock-Paper-Scissors game. This repository is created to demonstrate fundamental OOP concepts such as **Classes & Objects**, **Constructors & Destructors**, and **Encapsulation**.


## Project Overview

The program allows two players to enter their names and play multiple rounds of Rock-Paper-Scissors via the console. It tracks round results, updates scores dynamically, and displays a final scoreboard when players choose to exit.

Key OOP Concepts Applied

1. **Classes and Objects**:
   * `Round`: Manages individual round choices and evaluates the round winner.
   * `Game`: Controls overall gameplay, player details, round progression, and total scores.

2. **Constructors**:
   * `Round()` initializes player choices to empty strings upon creation.
   * `Game(string name1, string name2)` sets up player names and resets scores to `0` at start.

3. **Destructors**:
   * `~Round()` and `~Game()` illustrate automatic resource cleanup and object destruction when leaving scope.

4. **Encapsulation**:
   * Internal attributes (`p1Score`, `p2Score`, `player1Choice`, etc.) are declared as `private` to prevent direct modification.
   * Interaction with private data occurs strictly through controlled `public` member functions (`setChoices()`, `play()`, `determineWinner()`).

How to Run

1. **Clone or Download**: Download the `main.cpp` file from this repository.
2. **Compile**: Open a terminal or IDE (Dev-C++, Code::Blocks, Visual Studio Code) and compile using a C++ compiler:
   ```bash
   g++ main.cpp -o RockPaperScissors
