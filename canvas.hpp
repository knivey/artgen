#ifndef CANVAS_H
#define CANVAS_H

#include <vector>
#include <string>
#include "pixel.hpp"

class canvas
{
public:
    /**
     * Default constructor
     */
    canvas(unsigned int width, unsigned int height);

    std::vector<std::vector<pixel>> data;
    unsigned int width;
    unsigned int height;

    std::string render(bool IRC = false);
};

#endif // CANVAS_H
