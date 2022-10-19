#ifndef OPPONENT_H
#define OPPONENT_H
#include <iostream>
#include "cpputils/graphics/image.h"
#include "game_element.h"
using namespace std;

class Opponent : public GameElement{
    public:
    Opponent() : Opponent(0, 0) {}
    Opponent(int x, int y) : GameElement(x, y, 50, 50) {}  // inheritance
    void Draw(graphics::Image& opponent_drawing);
   
    int x_;
    int y_;
    const int kWidth_ = 50;
    const int kHeight_ = 50;
};

//Change if anything looks incorrect
class OpponentProjectile : public GameElement{
    public:
    OpponentProjectile() : OpponentProjectile(0, 0) {}
    OpponentProjectile(int x, int y) : GameElement(x, y, 10, 10) {}  
    void Draw(graphics::Image& image);

    int x_;
    int y_;
    const int kWidth_ = 5;
    const int kHeight_ = 5;
};
#endif
