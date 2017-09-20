#include "stringutils.h"
#include <iostream>
#include <string>

using std::string;
using namespace cpputils;

int main()
{
    auto s = string{ "  test" };
    ltrim(s);

    auto t = string{ "test  " };
    rtrim(t);

    std::cout << s << "\n"
              << t << "\n";
    return 0;
}
