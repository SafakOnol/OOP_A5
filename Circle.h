#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape 
{
public:
    Circle(Point center, int radius);
    virtual void draw();
private:
    std::string m_id = "Circle";
    Point m_center;
    float m_radius;
    float m_area; // area = pi * r^2
    float m_circumference; // circumference = 2 * pi * r
public:
    Point getCenter() const;
	float getRadius() const;
    float getArea();
    float getCircumference();
};
