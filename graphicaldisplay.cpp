#include "graphicaldisplay.h"
#include <math.h>

GraphicalDisplay::GraphicalDisplay()
{

}
int distance (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
}
void GraphicalDisplay::drawCircle(int r)
{
    std::cout<<"Graphical"<<std::endl;


    r=5;
    for (int i=-r;i <= r;i++)  {
        for (int j=-r;j <= r;j++)  {

            if ( distance(j,i)<=(float)r) std::cout << "c";
            else std::cout << " ";

         }
         std::cout << std::endl;
}
}
void GraphicalDisplay::drawTriangle(pat::Vector2f a, pat::Vector2f b)
{

}

void GraphicalDisplay::drawParralellogram(pat::Vector2f a, pat::Vector2f b)
{

}
