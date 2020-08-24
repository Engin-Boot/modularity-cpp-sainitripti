#include "colorpair.h"

#ifndef TELCOCOLORCODER_H
#define TELCOCOLORCODER_H

namespace TelCoColorCoder
{
    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;

    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    std::string ToString();
}

#endif



