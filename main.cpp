#include <iostream>
#include "display.h"

#include "textdisplay.h"
#include "graphicaldisplay.h"
#include "Circle.h"
#include "triangle.h"
#include "vector2f.h"
#include "ComplexShape.h"

using namespace std;

int main()
{
    //Shape *o = new Circle;
    Display * text_disp = new TextDisplay;
    Display * graph_disp = new GraphicalDisplay;

    Shape * o1 = new Triangle(graph_disp, pat::Vector2f(3,2), pat::Vector2f(2,-2));
    Shape * o2 = new Circle(graph_disp, 5);
    Shape * o3 = new Parallelogram (graph_disp,pat::Vector2f(3,2), pat::Vector2f(2,-2));
    ComplexShape*o4=new ComplexShape(graph_disp);
    o4->add(o1);
    o4->add(o2);
    o4->add(o3);
    o4->draw();
    o1->draw();
    o2->draw();
    o3->draw();

    o1->changeDisplay(text_disp);
    o2->changeDisplay(text_disp);
    o3->changeDisplay(text_disp);
    o4->changeDisplay(text_disp);
    o4->draw();
    o1->draw();
    o2->draw();
    o3->draw();

    delete o1;
    delete o2;
    delete o3;
    delete o4;
    delete graph_disp;
    delete text_disp;

    return 0;
}
