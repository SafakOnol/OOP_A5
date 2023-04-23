#include "Rectangle.h"
#include "Circle.h"

int main()
{
    // Create a rectangle and a circle
    Rectangle rectangle(Point(0.0f, 0.0f), Point(4.6f, 5.2f));
    Circle circle(Point(5.5, 15.30), 3.6);

    // Draw the rectangle and the circle
    rectangle.draw();
    circle.draw();

    return 0;
}
