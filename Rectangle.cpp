// Rectangle.cpp
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(Point topLeft, Point bottomRight)
    : m_topLeft(topLeft), m_bottomRight(bottomRight)
{
}

Rectangle::Rectangle(Point m_center, float width, float height)
	: m_center(m_center), m_width(width), m_height(height)
{
}

void Rectangle::draw()
{
    std::cout << "Drawing " << m_id << " from "
        << "(" << m_topLeft.getX() << "," << m_topLeft.getY() << ") "
        << "to "
        << "(" << m_bottomRight.getX() << "," << m_bottomRight.getY() << ")"
        << std::endl;
}

Point Rectangle::getTopLeft() const
{
    return m_topLeft;
}

Point Rectangle::getTopRight() const
{
    return m_topRight;
}

Point Rectangle::getBottomLeft() const
{
    return m_bottomLeft;
}

Point Rectangle::getBottomRight() const
{
    return m_bottomRight;
}

Point Rectangle::getCenter() const
{
    return m_center;
}

float Rectangle::getWidth() const
{
    return m_width;
}

float Rectangle::getHeight() const
{
    return m_height;
}

float Rectangle::getArea()
{
    return m_area = (m_bottomRight.getX() - m_topLeft.getX()) * (m_topLeft.getY() - m_bottomRight.getY());
}

float Rectangle::getPerimeter()
{
    return m_perimeter = 2 * ((m_bottomRight.getX() - m_topLeft.getX()) + (m_topLeft.getY() - m_bottomRight.getY()));
}
