#ifndef VECTOR2F_H
#define VECTOR2F_H

namespace pat {
    class Vector2f
    {
    public:
        Vector2f();
        Vector2f(float x, float y);
        Vector2f( const Vector2f & other);
        Vector2f & operator=(const Vector2f & other);
        Vector2f operator+(const Vector2f & other);
        Vector2f operator-(const Vector2f & other);
        Vector2f operator*(float scalar);
        Vector2f operator/(float scalar);

        float x, y;
    };
}

#endif // VECTOR2F_H
