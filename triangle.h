#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "display.h"
#include "vector2f.h"

class Triangle : public Shape
{
public:
    Triangle(Display * w, pat::Vector2f a, pat::Vector2f b);
    void draw() override;
protected:
    pat::Vector2f a, b;
};

#endif // TRIANGLE_H
