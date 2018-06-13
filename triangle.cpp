#include "triangle.h"

Triangle::Triangle(Display *w, pat::Vector2f a, pat::Vector2f b)
    :Shape::Shape(w), a(a), b(b)
{

}

void Triangle::draw()
{
    displayPointer->drawTriangle(a,b);
}
