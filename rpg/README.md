## Description

This is a console-based RPG character creation system written in C++. The program allows users to create multiple characters by selecting a name, race, and class, then displays their attributes and unique attack abilities.

The project is built using object-oriented programming principles such as inheritance, polymorphism, and abstraction. A base `Player` class defines shared attributes like name, race, health, and magic points, while specialized classes such as Mage, Warrior, and Priest override behaviors like attack actions.

The program also demonstrates dynamic object creation and management using pointers and vectors, allowing flexible handling of multiple player types during runtime.

---

## Features

- Multiple playable classes:
  - Mage (high magic power)
  - Warrior (balanced combat)
  - Priest (high magic and support abilities)

- Race selection system:
  - Human, Elf, Dwarf, Orc, and Troll

- Object-oriented design:
  - Inheritance and polymorphism
  - Base `Player` class with virtual functions
  - Encapsulation of player attributes

- Dynamic character creation:
  - Create multiple characters in one session
  - Uses `vector<Player*>` for flexible storage

- Unique attack behaviors:
  - Each class has its own attack message

- Input validation:
  - Handles invalid user input safely

- Memory management:
  - Dynamically allocated objects are properly deleted

## How to Run
1. Compile the program:


g++ main.cpp player.cpp -o rpg


2. Run the program:


./rpg
