#include <iostream>
#include "display.h"

#include "textdisplay.h"
#include "graphicaldisplay.h"
#include "Circle.h"

using namespace std;

int main()
{
    //Shape *o = new Circle;
    Display * p1 = new TextDisplay;
    Display * p2 = new GraphicalDisplay;

    p1->drawCircle(0);
    p2->drawCircle(0);

    delete p1;
    delete p2;
    cout << "Hello World!" << endl;
    return 0;
}
