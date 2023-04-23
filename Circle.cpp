// Circle.cpp
#include "Circle.h"
#include <iostream>

Circle::Circle(Point center, int radius)
    : m_center(center), m_radius(radius)
{
}

void Circle::draw()
{
    std::cout << "Drawing " << m_id << " at "
        << "(" << m_center.getX() << "," << m_center.getY() << ") "
        << "with radius " << m_radius
        << std::endl;
}

Point Circle::getCenter() const
{
    return Point(m_center.getX(), m_center.getY());
    std::cout << "Circle center is: " << m_center.getX() << "," << m_center.getY() << std::endl;
}

float Circle::getRadius() const
{
    return m_radius;
    std::cout << "Circle radius is: " << m_radius << std::endl;
}

float Circle::getArea()
{
    return m_area = m_radius * m_radius * 3.14159265359;
}

float Circle::getCircumference()
{
    return m_circumference = m_radius * 2 * 3.14159265359;
}