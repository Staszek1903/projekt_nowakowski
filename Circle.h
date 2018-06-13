#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

class Circle : public Shape
{
public:
    Circle(Display*w, int r);
    void draw() override;
private:
    int r;
};


#endif // CIRCLE_H_INCLUDED
