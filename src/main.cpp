#include <iostream>
#include <string>
#include "stringutils.h"

using std::string;
using namespace cpputils;

int main() 
{
    auto s = string{"  test"};
    ltrim(s); 

    std::cout << s << "\n";
    return 0;
}
