#ifndef VECTOR2F_H
#define VECTOR2F_H

namespace pat {
    /**
     * @brief The Vector2f class
     *  Klasa przechowująca wektor dwuwymiarowy typu float
     */

    class Vector2f
    {
    public:
        Vector2f();
        /**
         * @brief Vector2f
         * @param x wspolrzedna wektora x
         * @param y wspolrzedna wektora y
         */
        Vector2f(float x, float y);

        /**
         * @brief Vector2f kostruktor kopiujący buduje objekt z innego objektu
         * @param other inny wektor
         */
        Vector2f( const Vector2f & other);

        /**
         * @brief operator = operator kopiowania
         * @param other inny objekt
         * @return zwraca referencje na samego siebie
         */
        Vector2f & operator=(const Vector2f & other);

        /**
         * @brief operator + dodaje dwa objekty
         * @param other inny objekt
         * @return zwraca sume dwóch rektorów
         */
        Vector2f operator+(const Vector2f & other);

        /**
         * @brief operator - odejmuje dwa objekty
         * @param other inny objekt
         * @return zwraca różnice dwóch wektorów
         */
        Vector2f operator-(const Vector2f & other);

        /**
         * @brief operator * mnozy wektor razy skalar
         * @param scalar
         * @return zwraca iloczyn
         */
        Vector2f operator*(float scalar);

        /**
         * @brief operator / dzieli wektor przez skalar
         * @param scalar
         * @return zwraca iloraz
         */
        Vector2f operator/(float scalar);

        float x, y;
    };
}

#endif // VECTOR2F_H
