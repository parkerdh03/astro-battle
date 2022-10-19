#ifndef GAMEH
#define GAMEH

#include <iostream>
#include <string>
#include <vector>
#include "cpputils/graphics/image.h"
#include "cpputils/graphics/image_event.h"  //needed for animations
#include "opponent.h"
#include "player.h"

class Game {
    public:
    Game();
    graphics::Image& background;
    vector<Opponent> opponents;
    vector<OpponentProjectile> opponentProjectiles;
    vector<PlayerProjectile> playerProjectiles;
    Player player;

    graphics::Image& GetGameScreen();
    vector<Opponent>& GetOpponents();
    vector<OpponentProjectile>& GetOpponentProjectiles();
    vector<PlayerProjectile>& GetPlayerProjectiles();
    Player& GetPlayer();

    Game(int width, int height);

    void CreateOpponents();
    void CreateOpponentProjectiles();
    void CreatePlayerProjectiles();
    void Init();
    void UpdateScreen(); 
};

#endif
