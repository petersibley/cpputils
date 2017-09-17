cmake_minimum_required(VERSION 3.9)

if (MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(testbin  src/main.cpp)
target_compile_features(testbin PRIVATE cxx_std_17)
