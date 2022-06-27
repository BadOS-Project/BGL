#ifndef __render_hh_
#define __render_hh_

#include "../types.hh"

namespace bgl
{

    class Render
    {
    private:
        colorspace space; //颜色空间
    public:
        Render();
        ~Render();
    };

};

#endif
