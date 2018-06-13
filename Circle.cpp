#include "Circle.h"

Circle::Circle(Display *w, int r)
:r(r), Shape(w)
{

}
void draw()
{
    displayPointer->drawCircle(r);
}
