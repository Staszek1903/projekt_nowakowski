#include "Shape.h"

class Shape
{
public:
    Shape::Shape(Display*w);
    virtual void draw()=0;
    virtual void changeDisplay(Display*newDisplay)=0;
    virtual ~Shape();
};


