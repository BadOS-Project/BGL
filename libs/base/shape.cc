#include "../../includes/BGL/base/shape.hh"

namespace bgl
{
    Point::Point()
    {
    }

    Point::Point(int64_t x, int64_t y)
    {
        this->x = x;
        this->y = y;
    }

    void Point::setX(int64_t x)
    {
        this->x = x;
    }

    void Point::setY(int64_t y)
    {
        this->y = y;
    }

};
