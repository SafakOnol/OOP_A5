// Point.cpp
#include "Point.h"

Point::Point(float x, float y)
    : m_x(x), m_y(y)
{
}

float Point::getX() const
{
    return m_x;
}

float Point::getY() const
{
    return m_y;
}
