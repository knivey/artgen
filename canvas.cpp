#include "canvas.hpp"
#include <sstream>
#include <iomanip>
#include "irc2ansi.hpp"

canvas::canvas(unsigned int width, unsigned int height): width(width), height(height)
{
    pixel p;
//    p.c = "o";
    data.resize(height, std::vector<pixel>(width, p));
}

std::string canvas::render(bool IRC) {
    std::stringstream out;
    out << std::setfill('0');
    for(auto row : data) {
        int fg = -1;
        int bg = -1;
        for(auto p : row) {
            if(IRC) {
                if(p.fg != fg || p.bg != bg) {
                    out << "\x03" << std::setw(2) << p.fg;
                    if(p.bg != bg) {
                        out << "," << std::setw(2) << p.bg;
                    }
                    fg = p.fg;
                    bg = p.bg;
                }

                out << p.c;
            } else {
                if(p.fg != fg) {
                    out << irc2ansi_fg(p.fg);
                    fg = p.fg;
                }
                if(p.bg != bg) {
                    out << irc2ansi_bg(p.bg);
                    bg = p.bg;
                }
                out << p.c;
            }
        }
        out << "\n";
    }

    return out.str();
}
