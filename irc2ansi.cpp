#include "irc2ansi.hpp"
#include <sstream>


// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797#rgb-colors

std::string irc2ansi_fg(unsigned int color) {
    std::stringstream s;
    s << "\x1B[38;2;" << colormap[color][0] << ";";
    s << colormap[color][1] << ";" << colormap[color][2] << "m";
    return s.str();
}

std::string irc2ansi_bg(unsigned int color) {
    std::stringstream s;
    s << "\x1B[48;2;" << colormap[color][0] << ";";
    s << colormap[color][1] << ";" << colormap[color][2] << "m";
    return s.str();
}
