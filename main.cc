#include <iostream>
#include <stdlib.h>
#include <string>
#include "opponent.h"
#include "player.h"
#include "cpputils/graphics/image.h"
using namespace std;
int main() {


graphics::Image game_screen(800, 600);
bool DrawRectangle (int x, int y, int width, int height, int red, int green, int blue);
game_screen.DrawRectangle (0, 0, 800, 600, 0, 0, 0);
Opponent obj1;
OpponentProjectile obj2;
Player obj3;
PlayerProjectile obj4;
obj1.Draw(game_screen);
obj2.Draw(game_screen);
obj3.Draw(game_screen);
obj4.Draw(game_screen);
game_screen.ShowUntilClosed("background.bmp");
} 
