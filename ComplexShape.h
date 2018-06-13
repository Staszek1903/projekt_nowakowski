#ifndef COMPLEXSHAPE_H_INCLUDED
#define COMPLEXSHAPE_H_INCLUDED

#include "display.h"
#include "Shape.h"
#include <vector>

class ComplexShape
{
public:
    ComplexShape(Display*w);
    bool add(Shape*o);
protected:
        std::vector<int> tab;

};

#endif // COMPLEXSHAPE_H_INCLUDED
