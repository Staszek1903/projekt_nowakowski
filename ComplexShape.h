#ifndef COMPLEXSHAPE_H_INCLUDED
#define COMPLEXSHAPE_H_INCLUDED

#include "display.h"
#include "Shape.h"
#include <vector>

    /**
    * @brief ComplexShape tworzy kolekcje, dodaje do niej obiekty a nastepnie je rysuje
    **/

class ComplexShape: public Shape
{
public:
    /**
    * @brief kontruktor
    * @param w - wskaznik polimorficzny na wybrany zestaw funkcji rysujacych
    **/
    ComplexShape(Display*w);
    /**
    * @brief add pozwala na dodanie do kolekcji jeden ze zdefiniowanych wczesniej ksztaltow (trojkata, kola, rownolegloboku)
    * @param o - wskaznik na obiekt
    **/
    void add(Shape*o);
    /**
    * @brief wyswietla kolejno wszystkie obiekty dodane do kolekcji metoda add()
    **/
    void draw() override;
protected:
    /**
    * @brief tab tablica w ktorej przechowywane sa obiekty dodane metoda add()
    **/
        std::vector<Shape*> tab;

};

#endif // COMPLEXSHAPE_H_INCLUDED
