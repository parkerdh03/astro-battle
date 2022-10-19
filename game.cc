#include <iostream>
#include <string>
#include <vector>
#include "game.h"
#include "player.h"
#include "opponent.h"
#include "game_element.h"

using namespace std;

/*Game::Game();
std::unique_ptr<Opponent> opponent = std::make_unique<Opponent>(x, y);
*/
Game::Game(){
    graphics::Image& background;
};
void Game::CreateOpponents() {
    Opponent opponent_object;
    opponents.push_back(opponent_object);
}

void Game::CreateOpponentProjectiles() {
    OpponentProjectile opponent_projectile_object;
    opponentProjectiles.push_back(opponent_projectile_object);
}

void Game::CreatePlayerProjectiles() {
    PlayerProjectile player_projectile_object;
    playerProjectiles.push_back(player_projectile_object);
}

void Game::Init() {
    player.SetX(10);
    player.SetY(10);
}
graphics::Image& Game::GetGameScreen() {
    return background;
}
vector<Opponent>& Game::GetOpponents() {
    return opponents;
}
vector<OpponentProjectile>& Game::GetOpponentProjectiles() {
    return opponentProjectiles;
}
vector<PlayerProjectile>& Game::GetPlayerProjectiles() {
    return playerProjectiles;
}
Player& Game::GetPlayer() {
    return player;
}

void Game::UpdateScreen(){
   background.DrawRectangle(0, 0, 800, 600, 0, 0, 0);
   player.Draw(background);
   for (int i = 0; i < playerProjectiles.size(); i++) {
        playerProjectiles[i].Draw(background);
   }
   for (int i = 0; i < opponents.size(); i++) {
        opponents[i].Draw(background);
   }
   for (int i = 0; i < opponents.size(); i++) {
       opponentProjectiles[i].Draw(background);
   }
} 
