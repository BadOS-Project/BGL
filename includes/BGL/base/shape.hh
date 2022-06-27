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

};

#endif
