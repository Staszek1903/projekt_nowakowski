#include "textdisplay.h"

TextDisplay::TextDisplay()
{

}

void TextDisplay::drawCircle(int r)
{
    std::cout<<"Drawing a circle with radius "<<r<<"."<<std::endl;
}

void TextDisplay::drawTriangle(pat::Vector2f a, pat::Vector2f b)
{
    std::cout<<"Drawing a triangle from vectors ("<<a.x<<", "<<a.y<<"), ("<<b.x<<", "<<b.y<<")."<<std::endl;
}

void TextDisplay::drawParralellogram(pat::Vector2f a, pat::Vector2f b)
{
    std::cout<<"Drawing a paralellogram from vectors ("<<a.x<<", "<<a.y<<"), ("<<b.x<<", "<<b.y<<")."<<std::endl;
}
