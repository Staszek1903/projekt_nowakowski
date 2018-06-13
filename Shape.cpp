#include "Shape.h"


Shape::Shape(Display *w)
:displayPointer(w)
{

}
virtual void changeDisplay(Display*newDisplay);
{
   displayPointer=newDisplay;
}
