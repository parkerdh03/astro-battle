#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "cpputils/graphics/image.h"
#include "opponent.h"
#include "game_element.h"

using namespace std;



class Player : public GameElement {

    public:
    Player() : Player(0, 0) {}
    Player(int x, int y) : GameElement(x, y, 50, 50) {}
    void Draw(graphics::Image& player1);
    bool IntersectsWith(Opponent& opponent_character);
    bool IntersectsWith(OpponentProjectile& my_opponentprojectile);

    //   bool IntersectsWith(Opponent& opponent_obj);

    //   bool IntersectsWith(OpponentProjectile& opponent_projectile_obj);

    int x_;
    int y_;
    const int kWidth_ = 50;
    const int kHeight_ = 50;

};


class PlayerProjectile : public GameElement { 

    public:
    PlayerProjectile() : PlayerProjectile(0, 0) {}
    PlayerProjectile(int x, int y) : GameElement(x, y, 10, 10) {}  // inheritance
    void Draw(graphics::Image& image);
    bool IntersectsWith(Opponent& opponent_character);
    
    int x_;
    int y_;
    const int kWidth_ = 5;
    const int kHeight_ = 5;

};

#endif
