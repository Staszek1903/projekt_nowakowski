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
    float leftTan = -a.x / a.y;
    float leftTan2 = -b.x / b.y;
    float rightTan = -(b.x - a.x) / (b.y - a.y);

    float leftEnd = a.x + 5;
    float rightEnd = a.x + 5;

    float height = a.y - b.y;

    for(int i =0 ; i<=height+1; ++i){
        drawLine(leftEnd, rightEnd, 't');
        if(i == static_cast <int>(a.y))
            leftTan = leftTan2;
        leftEnd += leftTan;
        rightEnd += rightTan;
    }
}

void GraphicalDisplay::drawParralellogram(pat::Vector2f a, pat::Vector2f b)
{
    float leftTanUp = -a.x / a.y;
    float rightTanUp = -b.x / b.y;

    float leftTan = leftTanUp;
    float rightTan = rightTanUp;

    float height = a.y - b.y;

    float leftEnd = a.x + 5;
    float rightEnd = a.x + 5;

    for(int i=0; i<=height+1; ++i){
        drawLine(leftEnd, rightEnd, 'p');
        if(i == static_cast <int> (a.y))
            leftTan = rightTanUp;
        if(i == static_cast <int> (-b.y))
            rightTan = leftTanUp;
        leftEnd += leftTan;
        rightEnd += rightTan;
    }
}

void GraphicalDisplay::drawLine(int begin, int end, char brush)
{
    for(int i=0; i<=end; ++i){
        std::cout<<((i<begin)?' ':brush);
    }
    std::cout<<std::endl;
}
