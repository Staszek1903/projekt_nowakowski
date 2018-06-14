#ifndef GRAPHICALDISPLAY_H
#define GRAPHICALDISPLAY_H

#include "display.h"
#include <iostream>

    /**
    * @brief GraphicalDisplay s³uzy do graficznego wyswietlania obiektów
    **/

class GraphicalDisplay : public Display
{
public:
    GraphicalDisplay();
    /**
    * @brief drawCircle rysuje ko³o o promieniu r
    * @param r - promien kola
    **/
    void drawCircle(int r) override;
    /**
    * @brief drawTriangle rysuje trojkat oparty na wektorach (a1, a2),  (b1, b2)
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    void drawTriangle(pat::Vector2f a, pat::Vector2f b) override;
       /**
    * @brief drawParralellogram rysuje rownoleglobok oparty na wektorach [a1,a2] oraz [b1,b2] (zaczepionych we
             wspolnym punkcie)
    * @param a - pierwsza wspolrzedna wektora
    * @param b - druga wspolrzedna wektora
    **/
    void drawParralellogram(pat::Vector2f a, pat::Vector2f b) override;
protected:
    void drawLine(int begin, int end, char brush);
    /**
    * @brief distance oblicza odleglosc miedzy punktem o wspolrzednych (x,y) a srodkiem okregu
    * @param x - pierwsza wspolrzedna punktu
    * @param y - druga wsporzedna punktu
    * @return odleglosc miedzy punktem o wspolrzednych (x,y) a srodkiem okregu
    **/
    float distance (float x,float y);
};

#endif // GRAPHICALDISPLAY_H
