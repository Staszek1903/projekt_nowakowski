#include "Shape.h"


Shape::Shape(Display *w)
:displayPointer(w)
{

}
void changeDisplay(Display*newDisplay);
{
   displayPointer=newDisplay;
}
