#include "ComplexShape.h"

ComplexShape::ComplexShape(Display*w)
:Shape::Shape(w)
{

}
void ComplexShape::add(Shape*o)
{
    tab.push_back(o);

}
void ComplexShape::draw()
{
    for (int i=0; i<tab.size();i++)
    {
        tab[i]->draw();
    }
}

