#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape 
{
public:
    Rectangle(Point topLeft, Point bottomRight);
    Rectangle(Point m_center, float width, float height);
    virtual void draw();
private:
    std::string m_id = "Rectangle";
    Point m_topLeft;
    Point m_topRight;
    Point m_bottomLeft;
    Point m_bottomRight;
    Point m_center;
    float m_width;
    float m_height;
    float m_area;
    float m_perimeter;
public:
    Point getTopLeft() const;
	Point getTopRight() const;
	Point getBottomLeft() const;
	Point getBottomRight() const;
	Point getCenter() const;
    float getWidth() const;
    float getHeight() const;
	float getArea();
	float getPerimeter();
};
