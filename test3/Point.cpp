#include "Point.h"
#include <cmath>
#include <iostream>

Point::Point(double x, double y)
  : x(x), y(y)
{
}

void Point::setX(double x)
{
  this->x = x;
}

void Point::setY(double y)
{
  this->y = y;
}

double Point::Distance(const Point& other) const
{
  return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

void Point::print() const
{
  std::cout << "(" << x << "," << y << ")" << std::endl;
}