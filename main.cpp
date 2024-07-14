//
//  main.cpp
//  tictactoe
//
//  Created by tamta asatiani on 28.06.24.
//

#include <iostream>

#include "game.hpp"

int main() {
    
    Game game;
    
    while(game.isRunning())
    {
        game.run();
    }
}
