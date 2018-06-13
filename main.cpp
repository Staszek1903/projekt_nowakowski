#include <iostream>
#include "display.h"

#include "textdisplay.h"
#include "graphicaldisplay.h"
#include "Circle.h"
#include "triangle.h"
#include "parallelogram.h"
#include "vector2f.h"

using namespace std;

int main()
{
    //Shape *o = new Circle;
    Display * text_disp = new TextDisplay;
    Display * graph_disp = new GraphicalDisplay;

    Shape * o = new Triangle(graph_disp, pat::Vector2f(10,15), pat::Vector2f(15,-10));
    Shape * o2 = new Circle(graph_disp, 5);
    Shape * o3 = new Parallelogram(graph_disp, pat::Vector2f(10,15), pat::Vector2f(15,-10));

    o->draw();
    o2->draw();
    o3->draw();

    delete graph_disp;
    delete text_disp;
    cout << "Hello World!" << endl;

    return 0;
}
