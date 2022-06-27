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

    Line::Line()
    {
    }

    Line::Line(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }

    Line::Line(int64_t x1, int64_t y1, int64_t x2, int64_t y2)
    {
        this->p1 = Point(x1, y1);
        this->p2 = Point(x2, y2);
    }

};
