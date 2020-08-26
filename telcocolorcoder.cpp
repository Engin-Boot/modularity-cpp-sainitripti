#include "telcocolorcoder.h"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    std::string ToString() {
        
        std::string colorCodingStr = "\nPair Number \tColor\n\n";

        int totalPairs = numberOfMajorColors * numberOfMinorColors;
        
        for (int pairNumber = 1; pairNumber <= totalPairs; pairNumber++) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            colorCodingStr += std::to_string(pairNumber) + "\t\t" + colorPair.ToString() + "\n\n";
        }
        
        return colorCodingStr;
    }
}

