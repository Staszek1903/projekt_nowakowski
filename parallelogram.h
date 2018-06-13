#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Shape.h"
#include "vector2f.h"

class Parallelogram: public Shape
{
public:
    Parallelogram(Display * w, pat::Vector2f a, pat::Vector2f b);
    void draw() override;
protected:
    pat::Vector2f a, b;
};

#endif // PARALLELOGRAM_H
