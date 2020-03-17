// Author: Duan Lian (duanlian1210@163.com)

#ifndef UTILITY_COLORFUL_H__
#define UTILITY_COLORFUL_H__

#include <sstream>

namespace utility {

enum class Style {
  None = -1,
  Reset = 0,
  Bold = 1,
  Dim = 2,
  Italic = 3,
  Underline = 4,
  Blink = 5,
  Rblink = 6,
  Reversed = 7,
  Conceal = 8,
  Crossed = 9,

  Black = 30,
  Red = 31,
  Green = 32,
  Yellow = 33,
  Blue = 34,
  Magenta = 35,
  Cyan = 36,
  Gray = 37,

  OnBlack = 40,
  OnRed = 41,
  OnGreen = 42,
  OnYellow = 43,
  OnBlue = 44,
  OnMagenta = 45,
  OnCyan = 46,
  OnGray = 47,
  OnReset = 49,
};

template<typename T>
std::string SetColor(T value) {
  if (static_cast<int>(value) != -1) {
    std::ostringstream os;
    os << "\033[" << static_cast<int>(value) << "m";
    return os.str();
  }
  return "";
}

inline std::string SetEnd() {
  return "\033[0m";
}

}  // namespace utility

#endif
