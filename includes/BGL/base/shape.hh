#ifndef __shape_hh_
#define __shape_hh_

#include <iostream>

namespace bgl
{
    class Point
    {
    public:
        int64_t x, y;

        Point();
        Point(int64_t x, int64_t y);
        void setX(int64_t x);
        void setY(int64_t y);
    };

    class Line
    {
    public:
        Point p1, p2;

        Line();
        Line(Point p1, Point p2);
        Line(int64_t x1, int64_t y1, int64_t x2, int64_t y2);
    };

};

#endif
