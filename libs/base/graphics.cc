#include "../../includes/BGL/base/graphics.hh"

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

    Dimension::Dimension()
    {
    }

    Dimension::Dimension(uint64_t width, uint64_t height)
    {
        this->width = width;
        this->height = height;
    }

    void Dimension::setWidth(uint64_t width)
    {
        this->width = width;
    }

    void Dimension::setHeight(uint64_t height)
    {
        this->height = height;
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

    Rectangle::Rectangle()
    {
    }

    Rectangle::Rectangle(Point pos, Dimension size)
    {
        this->pos = pos;
        this->size = size;
    }

    Rectangle::Rectangle(int64_t x, int64_t y, uint64_t width, uint64_t height)
    {
        this->pos = Point(x, y);
        this->size = Dimension(width, height);
    }

    void Rectangle::setPos(Point pos)
    {
        this->pos = pos;
    }

    void Rectangle::setPos(int64_t x, int64_t y)
    {
        this->pos = Point(x, y);
    }

    void Rectangle::setSize(Dimension size)
    {
        this->size = size;
    }

    void Rectangle::setSize(uint64_t width, uint64_t height)
    {
        this->size = Dimension(width, height);
    }

    void Point::draw(void *buffer)
    {
        
    }

    void Line::draw(void *buffer)
    {
        
    }

    void Rectangle::draw(void *buffer)
    {
        
    }

};
