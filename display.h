#ifndef DISPLAY_H
#define DISPLAY_H
#include "vector2f.h"

class Display
{
public:
    Display();
    virtual void drawCircle(int r) =0;
    virtual void drawTriangle(pat::Vector2f a, pat::Vector2f b) =0;
    virtual void drawParralellogram(pat::Vector2f a, pat::Vector2f b) =0;    
    virtual ~Display();
protected:
};

#endif // DISPLAY_H
