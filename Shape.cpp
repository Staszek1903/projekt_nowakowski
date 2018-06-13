#include "Shape.h"


Shape::Shape(Display *w)
:displayPointer(w)
{

}

void Shape::changeDisplay(Display *newDisplay)
{
    displayPointer= newDisplay;
}

Shape::~Shape()
{

}
