#include <iostream>
#include "player.h"
#include "opponent.h"
#include "cpputils/graphics/image.h"
#include "game_element.h"

using namespace std;



// Player Class

void Player::Draw(graphics::Image& image) {
  graphics::Image my_player(50, 50);
  bool DrawRectangle(int x, int y, int width, int height, int red, int green, int blue);
  image.DrawRectangle(x_, y_, kWidth_, kHeight_, 0, 255, 255);
}
bool Player::IntersectsWith(Opponent& opponent_character) {
  if (Player::GetX() == opponent_character.GetX()) {
    if (Player::GetY() == opponent_character.GetY()) {
      return 1;
    } else {
      return 0;
    }
  }
  return 0;
}
bool Player::IntersectsWith(OpponentProjectile& my_opponentprojectile) {
  if (Player::GetX() == my_opponentprojectile.GetX()) {
    if (Player::GetX() == my_opponentprojectile.GetX()) {
      return 1;
    } else {
      return 0;
    }
  }
  return 0;
}

// Player Projectile Class

void PlayerProjectile::Draw(graphics::Image& image) {
  graphics::Image my_playerprojectile(5, 5);
  image.DrawRectangle(x_, y_, kWidth_, kHeight_, 0, 0, 255);
}
bool PlayerProjectile::IntersectsWith(Opponent& opponent_character) {
  if (PlayerProjectile::GetX() == opponent_character.GetX()) {
    if (PlayerProjectile::GetY() == opponent_character.GetY()) {
      return 1;
    } else {
      return 0;
    }
  }
  return 0;
}
