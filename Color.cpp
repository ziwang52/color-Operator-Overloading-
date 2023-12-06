
#include <iostream>
#include "graph1.h"
#include "Color.h"

Color::Color()
{
  r = 0;
  g = 0;
  b = 0;
}
Color::Color(int r, int g, int b)
{
  this->r = r;
  this->g = g;
  this->b = b;
}
void Color::setCol(int r, int g, int b)
{
  this->r = r;
  this->g = g;
  this->b = b;


}
int Color::getRed()
{
  return r;
}
int Color::getGreen()
{
  return g;
}
int Color::getBlue()
{
  return b;
}
Color Color::operator+(Color right)
{
  Color result;
  result.r = r + right.getRed();
  if (result.r > 255)
  {
    result.r = 255;
  }
  result.g = g + right.getGreen();
  if (result.g > 255)
  {
    result.g = 255;
  }
  result.b = b + right.getBlue();
  if (result.b > 255)
  {
    result.b = 255;
  }
  return result;
}
Color Color::operator-(Color right)
{
  Color result;
  result.r = r - right.getRed();
  if (result.r < 0)
  {
    result.r = 0;
  }
  result.g = g - right.getGreen();
  if (result.g < 0)
  {
    result.g = 0;
  }
  result.b = b - right.getBlue();
  if (result.b < 0)
  {
    result.b = 0;
  }
  return result;


}
Color Color::operator/(int right)
{
  Color result;

  result.r = r / right;
  result.g = g / right;
  result.b = b / right;
  return (result);


}
Color Color::operator*(int right)
{
  Color result;

  result.r = r * right;
  result.g = g * right;
  result.b = b * right;
  return (result);
}
bool Color::operator==(Color right)
{
  bool result = false;
  if (r != right.getRed() || g != right.getGreen() || b != right.getBlue())
  {
    return result;
  }
  else
  {
    result = true;
    return result;
  }
}
bool Color::operator!=(Color right)
{
  if ((r == right.getRed()) && (g == right.getGreen()) && (b == right.getBlue()))
  {
    return false;
  }
  else
  {

    return true;
  }
}
void Color::operator=(Color right)
{
  r = right.getRed();
  g = right.getGreen();
  b = right.getBlue();

}
Color Color::operator!()
{
  Color result;

  result.r = 255 - r;
  result.g = 255 - g;
  result.b = 255 - b;

  return result;
}

Color Color:: operator++()
{
  r += 25;
  g += 25;
  b += 25;

  if (r > 255)
    r = 255;

  if (g > 255)
    g = 255;

  if (b > 255)
    b = 255;


  return *this;

}


Color Color:: operator++(int dummy)
{
  Color orig = (*this);

  r += 25;
  g += 25;
  b += 25;

  if (r > 255)
    r = 255;

  if (g > 255)
    g = 255;

  if (b > 255)
    b = 255;

  return(orig);
}
Color  Color::operator--()
{
  r -= 25;
  g -= 25;
  b -= 25;

  if (r < 0)
    r = 0;

  if (g < 0)
    g = 0;

  if (b < 0)
    b = 0;

  return *this;
}
Color  Color::operator--(int dummy)
{
  Color orig = (*this);

  r -= 25;
  g -= 25;
  b -= 25;

  if (r < 0)
    r = 0;

  if (g < 0)
    g = 0;

  if (b < 0)
    b = 0;
  return(orig);

}
bool  Color::operator<(Color right)
{
  double mag1 = sqrt(r * r + g * g + b * b);
  double mag2 = sqrt(right.r * right.r + right.g * right.g + right.b * right.b);
  return mag1 < mag2;
}
bool  Color::operator>(Color right)
{
  double mag1 = sqrt(r * r + g * g + b * b);
  double mag2 = sqrt(right.r * right.r + right.g * right.g + right.b * right.b);
  return mag1 > mag2;
}



void Color::draw(int x, int y, int w, int h)
{
  int rect;
  rect = drawRect(x, y, w, h);
  setColor(rect, r, g, b);
}
