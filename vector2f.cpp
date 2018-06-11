#include "vector2f.h"

pat::Vector2f::Vector2f()
    :x(0.0f),y(0.0f){}

pat::Vector2f::Vector2f(float x, float y)
    :x(x), y(y){}

pat::Vector2f::Vector2f(const pat::Vector2f &other)
    :x(other.x), y(other.y){}

pat::Vector2f &pat::Vector2f::operator=(const pat::Vector2f &other)
{
    x = other.x;
    y = other.y;

    return *this;
}

pat::Vector2f pat::Vector2f::operator+(const pat::Vector2f &other)
{
    pat::Vector2f v;
    v.x = x+other.x;
    v.y = y+other.y;
    return v;
}

pat::Vector2f pat::Vector2f::operator-(const pat::Vector2f &other)
{
    pat::Vector2f v;
    v.x = x-other.x;
    v.y = y-other.y;
    return v;
}

pat::Vector2f pat::Vector2f::operator*(float scalar)
{
    pat::Vector2f v;
    v.x = x*scalar;
    v.y = y*scalar;
    return v;
}

pat::Vector2f pat::Vector2f::operator/(float scalar)
{
    pat::Vector2f v;
    v.x = x/scalar;
    v.y = y/scalar;
    return v;
}


