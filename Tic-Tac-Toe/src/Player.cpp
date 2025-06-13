#include "Player.h"
#include <iostream>

Player::Player(const std::string& playerName, char playerSymbol)
    : name(playerName), symbol(playerSymbol) {
    }

std:: string Player::getName() const {
    return name;
}

char Player::getSymbol() const {
    return symbol;
}

void Player::displayInfo() const {
    std::cout << "Player Name: " << name << ", Symbol: " << symbol << std::endl;
}