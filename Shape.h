#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include "display.h"

    /**
    * @brief Shape jest klasa bazowa dla ksztaltow
    **/

class Shape
{
public:
    /**
    * @brief konstruktor
    * @param w - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    **/
    Shape(Display*w);
     /**
    * @brief draw wyswietla dany ksztaly
    **/
    virtual void draw()=0;
     /**
    * @brief changeDisplay pozwala po jej wywo³aniu wyswietlic obiekt za pomoca metody draw()
    * @param newDisplay - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    **/
    virtual void changeDisplay(Display*newDisplay);

    virtual ~Shape();
protected:
    /**
    * @param displayPointer - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    **/
    Display* displayPointer;
};


#endif // SHAPE_H_INCLUDED
