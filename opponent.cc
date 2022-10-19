#include "opponent.h"
#include <vector>
#include "cpputils/graphics/image.h"
#include "game.h"
#include "game_element.h"

void Opponent::Draw(graphics::Image& image) {
  graphics::Image opponent_character(50, 50);
  bool DrawRectangle(int x, int y, int width, int height, int red, int green, int blue);
  image.DrawRectangle(x_, y_, kWidth_, kHeight_, 255, 0, 0);
}
 
void OpponentProjectile::Draw(graphics::Image& image) {
  graphics::Image opponent_projectile(5, 5);
  bool DrawCircle(int x, int y, int radius, int red, int green, int blue);
  image.DrawRectangle(x_, y_, kWidth_, kHeight_, 225, 255, 53);
}
