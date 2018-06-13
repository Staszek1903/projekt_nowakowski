#include <iostream>
#include "display.h"

#include "textdisplay.h"
#include "graphicaldisplay.h"
#include "Circle.h"
#include "triangle.h"
#include "vector2f.h"

using namespace std;

int main()
{
    //Shape *o = new Circle;
    Display * text_disp = new TextDisplay;
    Display * graph_disp = new GraphicalDisplay;

    Shape * o = new Triangle(graph_disp, pat::Vector2f(3,2), pat::Vector2f(2,-2));

    o->draw();

    delete graph_disp;
    delete text_disp;
    cout << "Hello World!" << endl;
    return 0;
}
