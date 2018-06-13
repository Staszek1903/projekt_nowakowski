#ifndef COMPLEXSHAPE_H_INCLUDED
#define COMPLEXSHAPE_H_INCLUDED

#include "display.h"
#include "Shape.h"
#include <vector>

class ComplexShape: public Shape
{
public:
    ComplexShape(Display*w);
    bool add(Shape*o);
    void draw() override;
protected:
        std::vector<Shape*> tab;

};

#endif // COMPLEXSHAPE_H_INCLUDED
