
#include<string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    extern int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
   extern const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
   extern int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };
 
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
