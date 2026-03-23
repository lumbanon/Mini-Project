🧙 RPG Game (C++)

This repository contains a simple console-based RPG (Role-Playing Game) written in C++. The game allows players to choose different character classes and engage in basic gameplay mechanics such as combat and character interaction.

📖 Description

This project is a basic RPG system implemented in C++ using object-oriented programming concepts. Players can select from multiple classes such as Warrior, Mage, and Priest, each with unique attributes and abilities.

The program demonstrates:

Class inheritance
Polymorphism
Encapsulation
Basic game logic
🎮 Features
Multiple character classes:
⚔️ Warrior (high strength, durable)
🔮 Mage (high magic damage)
✨ Priest (healing abilities)
Turn-based interactions
Simple combat system
Console-based interface
Modular code structure with header and source files
📁 Project Structure
rpg/
├── main.cpp        # Entry point of the game
├── player.h        # Base Player class
├── player.cpp
├── warrior.h       # Warrior class
├── mage.h          # Mage class
├── priest.h        # Priest class
⚙️ How to Compile and Run
1. Compile the program
g++ main.cpp player.cpp -o rpg

If you have additional .cpp files, include them as well:

g++ main.cpp player.cpp warrior.cpp mage.cpp priest.cpp -o rpg
2. Run the program
./rpg
🧠 Concepts Used
Object-Oriented Programming (OOP)
Inheritance and virtual functions
Header and source file separation
Basic game loop design
