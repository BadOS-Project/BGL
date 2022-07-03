#include "../../includes/BGL/base/vector.hh"

#include <cmath>

namespace bgl
{
    Vector2::Vector2(int64_t x, int64_t y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2 Vector2::operator+(Vector2 v)
    {
        return Vector2(this->x + v.x, this->y + v.y);
    }

    Vector2 Vector2::operator-(Vector2 v)
    {
        return Vector2(this->x - v.x, this->y - v.y);
    }

    double Vector2::operator~()
    {
        return sqrt(x * x + y * y);
    }

    double Vector2::operator*(Vector2 v)
    {
        return (double)this->x * v.x + this->y * v.y;
    }

    double Vector2::operator^(Vector2 v)
    {
        double costheta = *this * v / (~*this) / ~v;
        return ~*this * ~v * sqrt(1 - costheta * costheta);
    }

};
