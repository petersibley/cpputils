#include "stringutils.h"
#include <iostream>
#include <string>

using cpputils::ltrim;
using cpputils::rtrim;
using std::string;
// test the clang tidy stuff via c casts
void f(int a)
{
    auto b = (int)a;
    std::cout << b;
}

int main()
{
    auto s = string{ "  test" };
    ltrim(s);

    auto t = string{ "test  " };
    rtrim(t);

    f(10);

    std::cout << s << "\n"
              << t << "\n";
    return 0;
}
