#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name; // Player's name
    char symbol;     // Player's symbol ('X' or 'O')

public:
    // Constructor to initialize player with a name and symbol
    Player(const std::string& playerName, char playerSymbol)
        : name(playerName), symbol(playerSymbol) {}
    // Getter for player's name
    std::string getName() const;

    char getSymbol() const;
    void displayInfo() const;
};

#endif