#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <iostream>

#include "display.h"

class Shape
{
public:
    Shape(Display*w);
    virtual void draw()=0;
    virtual void changeDisplay(Display*newDisplay);
    virtual ~Shape();
protected:
    Display* displayPointer;
};


#endif // SHAPE_H_INCLUDED
