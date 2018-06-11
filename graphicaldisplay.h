#ifndef GRAPHICALDISPLAY_H
#define GRAPHICALDISPLAY_H

#include "display.h"
#include <iostream>

class GraphicalDisplay : public Display
{
public:
    GraphicalDisplay();
    void drawCircle(int r) override;
    void drawTriangle(pat::Vector2f a, pat::Vector2f b) override;
    void drawParralellogram(pat::Vector2f a, pat::Vector2f b) override;
};

#endif // GRAPHICALDISPLAY_H