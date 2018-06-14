#ifndef DISPLAY_H
#define DISPLAY_H
#include "vector2f.h"

    /**
    * @brief Display jest podstawowa klasa, ktora deklaruje metody wyswietlania poszczegolnych ksztaltow
    **/
class Display
{
public:
    /**
    * @brief kontruktor
    **/
    Display();
    /**
    * @brief draw Circle wyswietla kolo o promieniu r
    * @param r - promien kola
    **/
    virtual void drawCircle(int r) =0;
    /**
    * @brief drawTriangle wyswietla trojkat oparty na wektorach (a1, a2), (b1, b2)
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    virtual void drawTriangle(pat::Vector2f a, pat::Vector2f b) =0;
    /**
    * @brief drawParralellogram wyswietla rownoleglobok oparty na wektorach (a1, a2), (b1, b2)
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    virtual void drawParralellogram(pat::Vector2f a, pat::Vector2f b) =0;
    /**
    * @brief destruktor
    **/
    virtual ~Display();
protected:
};

#endif // DISPLAY_H
