#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"
#include "display.h"

class Circle : public Shape
{
public:
    Circle(Display*w, int r);
    void draw() override;
private:
    int r;

};


#endif // CIRCLE_H_INCLUDED
