#ifndef GAME_ELEMENT_H
#define GAME_ELEMENT_H
#include <string>
#include "cpputils/graphics/image.h"
 
class GameElement {
 private:
  int x_;
  int y_;
  int width_;
  int height_;

 public:
  GameElement();

  GameElement(int x, int y, int width, int height);
 
  // virtual void Draw(graphics::Image& image);  // draws 5x5 black square
  // bool IntersectsWith(GameElement* element);
  int GetX();
  void SetX(int x);
  int GetY();
  void SetY(int y);
  int GetWidth();
  int GetHeight();
  void Draw(graphics::Image& game_element_rect);
};
#endif
