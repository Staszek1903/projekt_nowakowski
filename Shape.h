#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <iostream>

class Shape
{
public:
    Shape(Display*w);
    virtual void draw()=0;
    virtual void changeDisplay(Display*newDisplay)=0;
    virtual ~Shape();
};


#endif // SHAPE_H_INCLUDED
