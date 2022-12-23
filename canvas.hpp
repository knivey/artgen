#ifndef CANVAS_H
#define CANVAS_H

#include <vector>
#include <string>
#include "pixel.hpp"

class canvasCol {
    std::vector<std::vector<pixel>> &data;
    unsigned int col;
public:
    canvasCol(std::vector<std::vector<pixel>> &data, unsigned int col) : data(data), col(col) {};
    pixel& operator[] (unsigned int row) {
        return data[row][col];
    };
};

class canvas
{
private:
    std::vector<std::vector<pixel>> data;
    unsigned int width;
    unsigned int height;
public:
    canvas(unsigned int width, unsigned int height);
    std::string render(bool IRC = false);
    canvasCol operator[] (unsigned int col) {
        return canvasCol(data, col);
    };
    unsigned int getWidth() {
        return width;
    }
    unsigned int getHeight() {
        return height;
    }
};

#endif // CANVAS_H
