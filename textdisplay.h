#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include "display.h"
#include <iostream>

/**
* brief TextDisplay ssuzy do tekstowego wyswietlania obiektów
**/

class TextDisplay : public Display
{
public:
    TextDisplay();
    /**
    * @brief drawCircle wypisuje tekst: Drawing a circle with radius r.
    * @param r - promien kola
    **/
    void drawCircle(int r) override;
    /**
    * @brief drawTriangle wypisuje tekst: Drawing a triangle from vectors (a1, a2), (b1, b2)
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    void drawTriangle(pat::Vector2f a, pat::Vector2f b) override;
    /**
    * @brief drawParralellogram wypisuje tekst: Drawing a parallelogram from vectors (a1, a2), (b1, b2).
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    void drawParralellogram(pat::Vector2f a, pat::Vector2f b) override;
};

#endif // TEXTDISPLAY_H
