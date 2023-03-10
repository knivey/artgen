#ifndef IRCTOANSI_H
#define IRCTOANSI_H
#include <string>

std::string irc2ansi_fg(unsigned int color);
std::string irc2ansi_bg(unsigned int color);

static const int colormap[99][3] = {
    {255,255,255},
    {0,0,0},
    {0,0,127},
    {0,147,0},
    {255,0,0},
    {127,0,0},
    {156,0,156},
    {252,127,0},
    {255,255,0},
    {0,252,0},
    {0,147,147},
    {0,255,255},
    {0,0,252},
    {255,0,255},
    {127,127,127},
    {210,210,210},

    {71,0,0},
    {71,33,0},
    {71,71,0},
    {50,71,0},
    {0,71,0},
    {0,71,44},
    {0,71,71},
    {0,39,71},
    {0,0,71},
    {46,0,71},
    {71,0,71},
    {71,0,42},
    {116,0,0},
    {116,58,0},
    {116,116,0},
    {81,116,0},
    {0,116,0},
    {0,116,73},
    {0,116,116},
    {0,64,116},
    {0,0,116},
    {75,0,116},
    {116,0,116},
    {116,0,69},
    {181,0,0},
    {181,99,0},
    {181,181,0},
    {125,181,0},
    {0,181,0},
    {0,181,113},
    {0,181,181},
    {0,99,181},
    {0,0,181},
    {117,0,181},
    {181,0,181},
    {181,0,107},
    {255,0,0},
    {255,140,0},
    {255,255,0},
    {178,255,0},
    {0,255,0},
    {0,255,160},
    {0,255,255},
    {0,140,255},
    {0,0,255},
    {165,0,255},
    {255,0,255},
    {255,0,152},
    {255,89,89},
    {255,180,89},
    {255,255,113},
    {207,255,96},
    {111,255,111},
    {101,255,201},
    {109,255,255},
    {89,180,255},
    {89,89,255},
    {196,89,255},
    {255,102,255},
    {255,89,188},
    {255,156,156},
    {255,211,156},
    {255,255,156},
    {226,255,156},
    {156,255,156},
    {156,255,219},
    {156,255,255},
    {156,211,255},
    {156,156,255},
    {220,156,255},
    {255,156,255},
    {255,148,211},
    {0,0,0},
    {19,19,19},
    {40,40,40},
    {54,54,54},
    {77,77,77},
    {101,101,101},
    {129,129,129},
    {159,159,159},
    {188,188,188},
    {226,226,226},
    {255,255,255}
};


#endif
