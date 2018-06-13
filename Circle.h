#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(Display*w, int r);
    void draw();
private:
    int r;
};


#endif // CIRCLE_H_INCLUDED
