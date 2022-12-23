#include <iostream>
#include <math.h>

#include "canvas.hpp"


int main(int argc, char **argv) {
    canvas canvas(80,20);
    char s[] = "lol";
    for(unsigned int x = 0; x < 80; ++x) {
        unsigned int y = 10 + round((sin(x/6.0)*5.0));
        canvas[x][y].c = s[x%(sizeof(s)-1)];
        canvas[x][y].fg = (x%12) +52;
    }

    std::cout << canvas.render(false);
    return 0;
}
