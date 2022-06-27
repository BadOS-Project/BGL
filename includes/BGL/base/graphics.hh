#ifndef __graphics_hh_
#define __graphics_hh_

#include <iostream>

#include "../types.hh"

namespace bgl
{

    class Graphics
    {
    public:
        virtual void draw(void *buffer) = 0;
    };

    class Point : Graphics
    {
    public:
        int64_t x, y;

        Point();
        Point(int64_t x, int64_t y);
        void setX(int64_t x);
        void setY(int64_t y);

        void draw(void *buffer);
    };

    class Dimension
    {
    public:
        uint64_t width, height;

        Dimension();
        Dimension(uint64_t width, uint64_t height);
        void setWidth(uint64_t width);
        void setHeight(uint64_t height);
    };

    class Line : Graphics
    {
    public:
        Point p1, p2;

        Line();
        Line(Point p1, Point p2);
        Line(int64_t x1, int64_t y1, int64_t x2, int64_t y2);

        void draw(void *buffer);
    };

    class Rectangle : Graphics
    {
    public:
        Point pos;
        Dimension size;

        Rectangle();
        Rectangle(Point pos, Dimension size);
        Rectangle(int64_t x, int64_t y, uint64_t width, uint64_t height);

        void setPos(Point pos);
        void setPos(int64_t x, int64_t y);
        void setSize(Dimension size);
        void setSize(uint64_t width, uint64_t height);

        void draw(void *buffer);
    };

};

#endif
