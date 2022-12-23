#include <iostream>

#include "canvas.hpp"


int main(int argc, char **argv) {
    canvas canvas(80,20);

    canvas.data[10][5].c = "x";

    std::cout << canvas.render(false);
    return 0;
}
