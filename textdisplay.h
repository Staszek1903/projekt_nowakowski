#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include "display.h"
#include <iostream>

class TextDisplay : public Display
{
public:
    TextDisplay();
    void drawCircle(int r) override;
    void drawTriangle(pat::Vector2f a, pat::Vector2f b) override;
    void drawParralellogram(pat::Vector2f a, pat::Vector2f b) override;
};

#endif // TEXTDISPLAY_H
