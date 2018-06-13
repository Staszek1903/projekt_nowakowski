#include "graphicaldisplay.h"
#include <math.h>

GraphicalDisplay::GraphicalDisplay()
{

}

float GraphicalDisplay::distance (float x,float y)  {
    return sqrt (pow(x,2)+pow(y,2));
}

void GraphicalDisplay::drawCircle(int r)
{
    for (int i=-r;i <= r;i++)  {
        for (int j=-r;j <= r;j++)  {
            float temp_dist = distance(j,i);
            if (temp_dist <=(float)r) std::cout << "c";
            else std::cout << " ";

         }
         std::cout << std::endl;
}
}
void GraphicalDisplay::drawTriangle(pat::Vector2f a, pat::Vector2f b)
{
    std::cout<<"Graphical Triangle: "<<a.x<<" "<<a.y<<" "<<b.x<<" "<<b.y<<std::endl;

    float leftTan = -a.x / a.y;
    float rightTan = (b.x - a.x) / (b.y - a.y);

    float leftEnd = a.x;
    float rightEnd = a.x;

    for(int i=0; i<a.y; ++i){
        drawLine(leftEnd, rightEnd, 't');
        leftEnd += leftTan;
        rightEnd -= rightTan;
    }

    leftTan = b.x / b.y;

    for(int i=0; i<=-b.y; ++i){
        drawLine(leftEnd,rightEnd,'t');
        leftEnd -= leftTan;
        rightEnd -= rightTan;
    }


}

void GraphicalDisplay::drawParralellogram(pat::Vector2f a, pat::Vector2f b)
{
    std::cout<<"Graphical Parralellogram: "<<a.x<<" "<<a.y<<" "<<b.x<<" "<<b.y<<std::endl;
}

void GraphicalDisplay::drawLine(int begin, int end, char brush)
{
    for(int i=0; i<=end; ++i){
        std::cout<<((i<begin)?' ':brush);
    }
    std::cout<<std::endl;
}
