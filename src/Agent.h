//
//  Agent.h
//  agent-simulator
//
//  Created by Conner K Ward on 4/15/19.
//  Copyright © 2019 Conner K Ward. All rights reserved.
//

#ifndef Agent_h
#define Agent_h
#include "Food.h"
#include "Board.h"

class Agent {

public:
    int health;
    int playercord [2];
    Agent(int innitHealth, int spawn[2], Board& b); // b is reference to board object instatiated in main
    void eat(Food someFood);
    void move(int direction[2]);
    void randomMove();
    bool age();
private:
    Board& internalboard; // internal reference holder so we can call it later when checking board state
};


#endif /* Agent_h */
