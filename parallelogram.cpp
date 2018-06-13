#include "parallelogram.h"


Parallelogram::Parallelogram(Display *w, pat::Vector2f a, pat::Vector2f b)
    :Shape::Shape(w), a(a), b(b)
{

}

void Parallelogram::draw()
{
    displayPointer->drawParralellogram(a,b);
}
