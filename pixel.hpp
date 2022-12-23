#ifndef PIXEL_H
#define PIXEL_H

#include <string>

class pixel
{
public:
    /**
     * Default constructor
     */
    pixel();

    int fg = 0;
    int bg = 1;
    std::string c = " ";
};

#endif // PIXEL_H
