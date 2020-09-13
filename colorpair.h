#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>
#include "cablecolor.h"

namespace TelCoColorCoder
{

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;

    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };
}

#endif
