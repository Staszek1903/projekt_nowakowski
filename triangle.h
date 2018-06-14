#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "display.h"
#include "vector2f.h"

    /**
    * @brief Triangle sluzy do wywolania obiektu - trojkata opartego na wektorach (a1, a2), (b1, b2)
    **/

class Triangle : public Shape
{
public:
    /**
    * @brief konstruktor
    * @param w - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    Triangle(Display * w, pat::Vector2f a, pat::Vector2f b);
    /**
    * @brief draw rysuje trojkat
    **/
    void draw() override;
protected:
    /**
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    pat::Vector2f a, b;
};

#endif // TRIANGLE_H
