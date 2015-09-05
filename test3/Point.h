#ifndef POINT_H
#define POINT_H

class Point
{
public:

  Point(double x = 0, double y = 0);

  void setX(double x);

  void setY(double y);

  double Distance(const Point& other) const;

  void print() const;

private:

  double x;
  double y;
};

#endif