#pragma once
#include <string>
#include <algorithm>

namespace cpputils
{
    inline void ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) {
                    return !std::isspace(c);
        }));
    }
}

