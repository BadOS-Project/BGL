cmake_minimum_required(VERSION 3.18)
project(BadGraphics)

set(CMAKE_CXX_STANDARD 20)

add_library(BGL SHARED libs/base/graphics.cc libs/base/vector.cc libs/base/render.cc)
