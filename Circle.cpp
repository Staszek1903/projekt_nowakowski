#include "Circle.h"

Circle::Circle(Display *w, int r)
    :Shape::Shape(w), r(r)
{

}
void Circle::draw()
{
    displayPointer->drawCircle(r);
}
