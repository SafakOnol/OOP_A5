#pragma once

class Point 
{
public:
    Point(float x = 0, float y = 0);
    float getX() const;
    float getY() const;
private:
    float m_x;
    float m_y;
};
