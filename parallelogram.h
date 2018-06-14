#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Shape.h"
#include "vector2f.h"

    /**
    * @brief Parallelogram sluzy do wywolania obiektu - rownolegloboku opartego na wektorach (a1, a2), (b1, b2)
    **/

class Parallelogram: public Shape
{
public:
    /**
    * @brief konstruktor
    * @param w - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    Parallelogram(Display * w, pat::Vector2f a, pat::Vector2f b);
    /**
    * @brief draw rysuje rownolegleglobok
    **/
    void draw() override;
protected:
    /**
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    pat::Vector2f a, b;
};

#endif // PARALLELOGRAM_H
