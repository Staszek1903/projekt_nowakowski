#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"
#include "display.h"

    /**
    * @brief Circle sluzy do wywolania obiektu - kola o promieniu r
    **/

class Circle : public Shape
{
public:
    /**
    * @brief konstruktor
    * @param w - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    * @param r - promien kola
    **/
    Circle(Display*w, int r);
    /**
    * @brief draw rysuje kolo
    **/
    void draw() override;
private:
    /**
    * @param r - promien kola
    **/
    int r;

};


#endif // CIRCLE_H_INCLUDED
