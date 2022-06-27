#ifndef __window_hh_
#define __window_hh_

#include <iostream>

#include "types.hh"

namespace bgl
{

    /**
     * @brief 绘制标题栏
     *
     * @param buffer 缓冲区
     * @param space 颜色空间
     * @param x 绘制区域的横坐标
     * @param y 绘制区域的纵坐标
     * @param width 绘制区域宽度
     * @param height 绘制区域高度
     */
    void paintTitle(void *buffer, colorspace space, int64_t x, int64_t y, uint64_t width, uint64_t height);

};

#endif
