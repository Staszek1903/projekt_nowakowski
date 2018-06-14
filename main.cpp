#include <iostream>
#include <cstdlib>
#include "display.h"

#include "textdisplay.h"
#include "graphicaldisplay.h"
#include "Circle.h"
#include "triangle.h"
#include "parallelogram.h"
#include "vector2f.h"
#include "ComplexShape.h"
#include <cmath>
#include <time.h>

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

    float ang1 = 0.2f;
    float ang2 = -0.2f;
    float delta = 0.1;

    char temp;
    std::cin>>temp;

    while(true){
        clock_t time = clock();
        while (clock() - time < CLOCKS_PER_SEC/8) {}

       system("cls");
        pat::Vector2f a(std::cos(ang1) * 20.0f, std::sin(ang1) * 20.0f);
        pat::Vector2f b(std::cos(ang2) * 20.0f, std::sin(ang2) * 20.0f);
        Triangle frame(graph_disp, a, b);
        Circle frame2(graph_disp, ((1.0f/(ang1+1))*10));
        frame.draw();
        frame2.draw();

        delta = ((ang1 >= 1.5f)||(ang1 <= 0.1))? -delta : delta;
        ang1 +=delta;
        ang2 = -ang1/2;
    }

    delete o1;
    delete o2;
    delete o3;
    delete o4;
    delete graph_disp;
    delete text_disp;

    return 0;
}
