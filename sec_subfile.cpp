#include "subfile.h"

Frac::Frac(int _header, int _footer)
{
    header = _header;
    footer = _footer;
}
Frac::Frac()
{
    header = 1;
    footer = 1;
}
Frac::~Frac()
{
}