#ifndef __vector_hh_
#define __vector_hh_

#include <bits/stdint-intn.h>

namespace bgl
{
    class Vector2
    {
    public:
        int64_t x, y;
        Vector2(int64_t x, int64_t y);

        Vector2 operator+(Vector2 v);
        Vector2 operator-(Vector2 v);
        double operator*(Vector2 v);//点积
        double operator^(Vector2 v);//叉积
        double operator~();//模长
    };
    
};

#endif
