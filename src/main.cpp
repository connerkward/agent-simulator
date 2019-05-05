#include <iostream>
#include <chrono> // for timer
#include <thread> // for timer
#include "Environment.hpp"

// MAP
int LEGNTH =20;
int WIDTH = 20;
int AGENTS = 2;
int FOODS = 4;
// SPAWN
int agent_spawn[2] =
{
    (WIDTH)/2,
    (LEGNTH)/2
};
// OTHER
int agent_health = 10;

// MAIN
int main(){
    Environment board(LEGNTH,WIDTH,AGENTS,FOODS);
    board.spawnAgent(agent_spawn);

    int vec[] = {4,4}; // arbitrary point
    board.spawnAgent(vec);

    //board.spawnSFood(vec);
    int iters = 0;
    board.print();
    while(true){
        board.step(1);
        board.print();
        iters++;
        std::cout<<"iterations:"<< iters <<std::endl;
        //std::this_thread::sleep_for (std::chrono::seconds(1));
    }
}
