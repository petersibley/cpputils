#pragma once
#include <algorithm>
#include <string>

namespace cpputils {
inline void ltrim(std::string& s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) {
        return !std::isspace(c);
    }));
}

inline void rtrim(std::string& s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int c) {
        return !std::isspace(c);
    })
                .base(),
        s.end());
}
}
