#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState {
private:
    char currentPlayer;
    bool gameCompleted;
public:
    GameState() : currentPlayer('X'), gameCompleted(false) {
    };

    // Function to reset the game state
    void reset() {
        currentPlayer = 'X';
        gameCompleted = false;
    };

    // Function to get the current player
    char getCurrentPlayer() const;

    // Function to switch the current player
    void switchPlayer() ;



};



#endif 
