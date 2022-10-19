#include "cpputils/graphics/image.h"
#include "game_element.h"

/*bool GameElement::IntersectsWith(GameElement* element) {
  return !(GetX() > element->GetX() + element->GetWidth()||
           element->GetX() > GetX() + GetWidth()||
           GetY() > element->GetY() + element->GetHeight()|| 
           element->GetY() > GetY() + GetHeight());
}*/
GameElement::GameElement() {
  x_ = 0;
  y_ = 0;
  width_ = 50;
  height_ = 50;
}
GameElement::GameElement(int x, int y, int width, int height) {}

int GameElement::GetX() {
  return x_;
}

void GameElement::SetX(int x) {
  x_ = x;
}

int GameElement::GetY() {
  return y_;
}

void GameElement::SetY(int y) {
  y_ = y;
}

int GameElement::GetWidth() {
  return width_;
}
int GameElement::GetHeight() {
  return height_;
}
void GameElement::Draw(graphics::Image& game_element_rect) {
  game_element_rect.DrawRectangle(x_, y_, 5, 5, 0, 0, 0);
}
